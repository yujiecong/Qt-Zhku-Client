#include "zhkuclientmain.h"
#include "ui_zhkuclientmain.h"
#include <QDebug>



ZhkuClientMain::ZhkuClientMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ZhkuClientMain)
{
    ui->setupUi(this);
    init_();
    connect(ui->curriculumButton,&QPushButton::clicked,this,&ZhkuClientMain::getCurriculum);
}

ZhkuClientMain::~ZhkuClientMain()
{
    delete ui;
}

void ZhkuClientMain::init_()
{
    hide();
    zhkuloginManager->show();

}

void ZhkuClientMain::getCurriculum()
{
    QNetworkRequest curReq(zhkuCurriculumPreUrl);
    QNetworkReply *curReply=manager.get(curReq);

    connect(curReply,&QNetworkReply::finished,[=](){
        QString preHtml=curReply->readAll();
        //        qDebug()<<preHtml;

        QString randomStr="abcdefghijklmnopqrstuvwxyz1234567890";
        QString rs;
        QRegExp vaildationExp("[a-z0-9]{31,31}");
        QString hiddenVaildationCode;
        int pos=preHtml.indexOf(vaildationExp);
        hiddenVaildationCode = vaildationExp.cap(0);

        qDebug()<<hiddenVaildationCode;
        qsrand(QTime(0,0,0).secsTo(QTime::currentTime()));
        for(int i=0;i<15;i++){
            int r=qrand()%randomStr.size();
            rs+=randomStr.at(r);
        }
        QString xnxq=zhkuloginManager->getXnxq();
        QString md5=strProcessor.getMd5("11347"+xnxq+rs).toUpper();

        QByteArray postdata;
        postdata.append("Sel_XNXQ="+xnxq+"&");
        postdata.append("rad=0&");
        postdata.append("px=0&");
        postdata.append("txt_yzm=&");
        postdata.append("hidyzm="+hiddenVaildationCode+"&");
        postdata.append("hidsjyzm="+md5);
        QString withPara=QString("?m=")+rs;
        qDebug()<<zhkuCurriculumUrl.url()+withPara;
        QNetworkRequest curriReq(QUrl(zhkuCurriculumUrl.url()+withPara));
        curriReq.setRawHeader("Content-Type", "application/x-www-form-urlencoded");

        QNetworkReply *curriReply=manager.post(curriReq,postdata);
        connect(curriReply,&QNetworkReply::finished,[=](){
            QString curriUrlHtml=strProcessor.gbk2Utf8(curriReply->readAll());
//            qDebug()<<curriUrlHtml;


            QRegExp urlExp("Pri_StuSel_Drawimg.aspx\\?type=\\d{1}&w=\\d{,}&h=\\d{,}&xnxq=\\d{5}");
            QString curriUrl;
            int pos2=curriUrlHtml.indexOf(urlExp);
            curriUrl = urlExp.cap(0);
            qDebug()<<QString("http://jw.zhku.edu.cn/znpk/")+curriUrl;

            QNetworkRequest curriUrlReq(QString("http://jw.zhku.edu.cn/znpk/")+curriUrl);
            QNetworkReply *curriUrlReply=manager.get(curriUrlReq);
            connect(curriUrlReply,&QNetworkReply::finished,[=](){
                QFile *curriculumFile=new QFile(QString(xnxq+"学期的课表.jpg"));
                if (!curriculumFile->open(QIODevice::WriteOnly)){
                    delete curriculumFile;
                    curriculumFile=nullptr;
                    qDebug()<<"curriculumFile文件写入失败!";

                }
                else{
                    QByteArray imgRaw=curriUrlReply->readAll();
                    curriculumFile->write(imgRaw);


                }
                curriculumFile->close();
                curriUrlReply->deleteLater();
                curriReply->deleteLater();
                curReply->deleteLater();
            });
        });

    });
}

