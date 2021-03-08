#include "zhkuclientmain.h"
#include "ui_zhkuclientmain.h"
#include <QDebug>
ZhkuClientMain::ZhkuClientMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ZhkuClientMain)
{
    ui->setupUi(this);
    manager=new QNetworkAccessManager(this);
    init_();
    connect(ui->LoginButton,&QPushButton::clicked,this,&ZhkuClientMain::tryLogin);
}

ZhkuClientMain::~ZhkuClientMain()
{
    delete ui;
}

void ZhkuClientMain::init_()
{
    //主页
    QNetworkRequest reqHome= QNetworkRequest(zhkuHomeUrl);
    reqHome.setRawHeader("User-Agent","Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3573.0 Safari/537.36");
    reqHome.setRawHeader("Host","jw.zhku.edu.cn");

    qDebug()<<manager->cookieJar();
    //验证码
    QNetworkReply *homeReply=manager->get(reqHome);
    connect(homeReply,&QNetworkReply::finished,[=](){
        QNetworkRequest reqCode = QNetworkRequest(zhkuLoginCodeUrl);
        reqCode.setRawHeader("Host", "jw.zhku.edu.cn");
        reqCode.setRawHeader("Referer", "http://jw.zhku.edu.cn/_data/login_home.aspx");
        reqCode.setRawHeader("User-Agent", "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3573.0 Safari/537.36");
        //    qDebug()<<reqCode.rawHeaderList();
        //开始下载验证码

        QString fileName("yzm.jpg");
        codeImg=new QFile(fileName);
        if(!codeImg->open(QIODevice::WriteOnly)){
            delete codeImg;
            codeImg=nullptr;
            return;
        }
        else{
            codeReply= manager->get(reqCode);
            connect(codeReply,&QNetworkReply::finished,this,&ZhkuClientMain::getCodeImg);
        }
        });
}

QString ZhkuClientMain::gbk2Utf8(const QByteArray &inStr)
{
    QTextCodec *gbk = QTextCodec::codecForName("GB18030");
    QString g2u = gbk->toUnicode(inStr);
    return g2u;
}

QByteArray  ZhkuClientMain::toUrlEncode(const QByteArray  &inStr)
{
    return QByteArray(QTextCodec::codecForName("utf8")->fromUnicode(inStr).toPercentEncoding());
}

QString ZhkuClientMain::getMd5(QString in)
{
    return QCryptographicHash::hash(in.toLatin1(), QCryptographicHash::Md5 ).toHex();
}


void ZhkuClientMain::tryLogin()
{
    QString pwd=ui->pwdInput->text();
    QString acc=ui->accountInput->text();
    qDebug()<<pwd<<acc;
    QString md5_1=getMd5(acc+getMd5(pwd).mid(0,30).toUpper()+"11347").mid(0,30).toUpper();

    QString code=ui->codeInput->text();
    qDebug()<<code;
    QString md5_2=getMd5(getMd5(code.toUpper()).mid(0,30).toUpper()+"11347").mid(0,30).toUpper();
    qDebug()<<md5_2;


    QNetworkRequest loginReq(zhkuLoginHomeUrl);
    loginReq.setRawHeader("Content-Type", "application/x-www-form-urlencoded");
    loginReq.setRawHeader("Host", "jw.zhku.edu.cn");
    loginReq.setRawHeader("Origin", "http://jw.zhku.edu.cn");
    loginReq.setRawHeader("Referer", "http://jw.zhku.edu.cn/_data/home_login.aspx");
    loginReq.setRawHeader("User-Agent", "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3573.0 Safari/537.36");

    QByteArray postdata;
    //将 sb字符变成url编码，操
    postdata.append("typeName="+toUrlEncode("ѧ��")+"&");
    postdata.append(QString("dsdsdsdsdxcxdfgfg="+md5_1+"&"));
    postdata.append(QString("fgfggfdgtyuuyyuuckjg="+md5_2+"&"));
    postdata.append("Sel_Type=STU&");
    postdata.append(QString("txt_asmcdefsddsd=")+acc+"&");

    postdata.append("txt_pewerwedsdfsdff=&");
    postdata.append("txt_sdertfgsadscxcadsads=&");
    postdata.append("txt_mm_lxpd=&");
    postdata.append("txt_psasas="+toUrlEncode("����������"));

    qDebug()<<postdata;

    QNetworkReply *loginReply=manager->post(loginReq,postdata);
    connect(loginReply,&QNetworkReply::finished,[=](){
       ui->textBrowser->setText(gbk2Utf8(loginReply->readAll()));
    });
}





void ZhkuClientMain::replyFinished(QNetworkReply *reply)
{
    QString response=gbk2Utf8(reply->readAll());
    qDebug()<<manager->cookieJar()->cookiesForUrl(zhkuHomeUrl);

    ui->textBrowser->setText(response);
    reply->deleteLater();
}

void ZhkuClientMain::getCodeImg()
{
    if(codeImg){
            qDebug()<<manager->cookieJar();
        QByteArray codeRaw=codeReply->readAll();
        ui->textBrowser->setText(gbk2Utf8(codeRaw));
        QPixmap pixmap;
        pixmap.loadFromData(codeRaw);
        ui->codeLabel->setPixmap(pixmap);
        pixmap.scaled(ui->codeLabel->size(), Qt::KeepAspectRatio);
        codeImg->write(codeRaw);
    }
    codeImg->close();

    codeReply->deleteLater();
}

void ZhkuClientMain::test()
{
    //拿到pwd md5
    //    md5(acc+md5(pwd )[:30].upper()+'11347')[:30].upper()
    QString pwd=ui->pwdInput->text();
    QString acc=ui->accountInput->text();

    QString md5_1=getMd5(acc+getMd5(pwd).mid(0,30).toUpper()+"11347").mid(0,30).toUpper();

    QString code=ui->codeInput->text();

    QString md5_2=getMd5(getMd5(code).mid(0,30).toUpper()+"11347").mid(0,30).toUpper();


}
