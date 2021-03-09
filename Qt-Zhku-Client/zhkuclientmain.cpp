#include "zhkuclientmain.h"
#include "ui_zhkuclientmain.h"
#include <QDebug>

QString ZhkuClientMain::xnxq=QString();

ZhkuClientMain::ZhkuClientMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ZhkuClientMain)
{
    ui->setupUi(this);
    manager=new QNetworkAccessManager(this);
    init_();
    connect(ui->LoginButton,&QPushButton::clicked,this,&ZhkuClientMain::tryLogin);
    connect(ui->curriculumButton,&QPushButton::clicked,this,&ZhkuClientMain::getCurriculum);
}

ZhkuClientMain::~ZhkuClientMain()
{
    delete ui;
}

void ZhkuClientMain::init_()
{

    pcook=new QFile("cookies.json");
    if(pcook->exists()){
        qDebug()<<"检测到本地cookies,尝试读取中";
        if(!pcook->open(QIODevice::ReadOnly)){
            delete pcook;
            pcook=nullptr;
            qDebug()<<"cookies读取失败!";
        }
        else{
            QByteArray cookread=pcook->readAll();
            QJsonObject json=qString2Json(QString(cookread));
            QNetworkCookieJar *jar=manager->cookieJar();
            QList<QNetworkCookie> cl;
            foreach (QString k, json.keys()) {
                QString v=json.take(k).toString();
                QNetworkCookie c(k.toLocal8Bit(),v.toLocal8Bit());
                cl.append(c);
            }
            //将cookies设置到对应url
            jar->setCookiesFromUrl(cl,zhkuLoginHomeUrl);
            jar->setCookiesFromUrl(cl,zhkuHomeUrl);
            jar->setCookiesFromUrl(cl,zhkuLoginCodeUrl);
            jar->setCookiesFromUrl(cl,zhkuTestUrl);
            manager->setCookieJar(jar);
            qDebug()<<manager->cookieJar()->cookiesForUrl(zhkuLoginHomeUrl);
            qDebug()<<"successed read";
            //            //判断cookies是否过期
            QNetworkRequest isvaildTest(zhkuTestUrl);
            QNetworkReply *testReply=manager->get(isvaildTest);

            QString readTest=gbk2Utf8(testReply->readAll());
            showText(readTest);
            qDebug()<<readTest;
            if (readTest.contains(QString("无权"))){
                qDebug()<<"cookies 已失效,请重新登录";

                //                    pcook->remove();
            }
            else if(readTest.contains("您被强迫下线")){
                qDebug()<<"cookies 显示你在别处登录!";
                qDebug()<<"cookies 已失效,请重新登录";
                pcook->remove();
            }
            else{
                qDebug()<<"cookies仍然有效!";
            }
            testReply->deleteLater();
            pcook->close();

        }
    }
    else{
        qDebug()<<"本地未检测到cookies";

        //主页
        QNetworkRequest reqHome= QNetworkRequest(zhkuHomeUrl);
        reqHome.setRawHeader("User-Agent","Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3573.0 Safari/537.36");
        reqHome.setRawHeader("Host","jw.zhku.edu.cn");


        //验证码
        QNetworkReply *homeReply=manager->get(reqHome);
        connect(homeReply,&QNetworkReply::finished,this,&ZhkuClientMain::getCodeImg);
    }
}

void ZhkuClientMain::showText(QByteArray &in)
{
    ui->textBrowser->setText(QString(in));
}

void ZhkuClientMain::getLocalXNXQ()
{
    QDate date(QDate::currentDate());
    int year = date.year();
    int month = date.month();
    //可以用 ? : 的形式
    if (month>8 || month <3){
        xnxq=QString::number(year)+QString::number(FirstHalfSemeSter);
    }
    else{
        xnxq=QString::number(year)+QString::number(SecondHalfSemester);
    }

}


void ZhkuClientMain::showText(QString &in)
{
    ui->textBrowser->setText(in);
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

QJsonObject ZhkuClientMain::qString2Json(QString jsonString)
{
    QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonString.toLocal8Bit().data());
    if(jsonDocument.isNull())
    {
        qDebug()<< "String NULL"<< jsonString.toLocal8Bit().data();
    }
    QJsonObject jsonObject = jsonDocument.object();
    return jsonObject;
}

QString ZhkuClientMain::qJson2QString(QJsonObject jsonObject)
{
    return QString(QJsonDocument(jsonObject).toJson());
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
        QString loginHtml=gbk2Utf8(loginReply->readAll());
        ui->textBrowser->setText(loginHtml);
        if (loginHtml.contains("正在加载")){
            //保存cookies
            qDebug()<<"未检测到本地cookies,开始保存cookies";
            qDebug()<<manager->cookieJar()->cookiesForUrl(zhkuLoginHomeUrl);
            if(!pcook->open(QIODevice::WriteOnly)){
                delete pcook;
                pcook=nullptr;
                qDebug()<<"cookies文件写入失败!";
            }
            else{
                QList<QNetworkCookie> l=manager->cookieJar()->cookiesForUrl(zhkuLoginHomeUrl);
                QJsonObject json;
                foreach (QNetworkCookie c, l) {
                    json.insert(QString(c.name()),QString(c.value()));
                }
                QString strjson=qJson2QString(json);
                pcook->write(strjson.toLocal8Bit());
                pcook->close();
                qDebug()<<"cookies文件写入成功!";

            }
        }
        else{
            qDebug()<<"有点问题的样子";
            //再次调用验证码api
            getCodeImg();
        }

        loginReply->deleteLater();
    });


}
void ZhkuClientMain::getCodeImg()
{
    //开始下载验证码
    QNetworkRequest reqCode = QNetworkRequest(zhkuLoginCodeUrl);
    reqCode.setRawHeader("Host", "jw.zhku.edu.cn");
    reqCode.setRawHeader("Referer", "http://jw.zhku.edu.cn/_data/login_home.aspx");
    reqCode.setRawHeader("User-Agent", "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3573.0 Safari/537.36");


    QString fileName("yzm.jpg");
    codeImg=new QFile(fileName);
    if(!codeImg->open(QIODevice::WriteOnly)){
        delete codeImg;
        codeImg=nullptr;
        return;
    }
    else{
        codeReply= manager->get(reqCode);
        connect(codeReply,&QNetworkReply::finished,[=](){
            qDebug()<<manager->cookieJar();
            QByteArray codeRaw=codeReply->readAll();
            QPixmap pixmap;
            pixmap.loadFromData(codeRaw);
            ui->codeLabel->setPixmap(pixmap);
            pixmap.scaled(ui->codeLabel->size(), Qt::KeepAspectRatio);
            codeImg->write(codeRaw);
            codeImg->close();
            codeReply->deleteLater();
        });
    }

}

void ZhkuClientMain::getCurriculum()
{
    QNetworkRequest curReq(zhkuCurriculumPreUrl);
    QNetworkReply *curReply=manager->get(curReq);


    QString preHtml=curReply->readAll();
    //        qDebug()<<preHtml;
    showText(preHtml);
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
    QString md5=getMd5("11347"+xnxq+rs).toUpper();

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

    QNetworkReply *curriReply=manager->post(curriReq,postdata);

    QString curriUrlHtml=gbk2Utf8(curriReply->readAll());
    qDebug()<<curriUrlHtml;
    showText(curriUrlHtml);
    QRegExp urlExp("Pri_StuSel_Drawimg.aspx\?type=\\d{1}&w=\\d{,}&h=\\d{,}&xnxq=\\d{5}");
    QString curriUrl;
    pos=preHtml.indexOf(urlExp);
    curriUrl = vaildationExp.cap(0);
    qDebug()<<QString("http://jw.zhku.edu.cn/znpk/")+curriUrl;
    //        QNetworkRequest curriUrlReq(QString("http://jw.zhku.edu.cn/znpk/")+curriUrl);
    //        QNetworkReply *curriUrlReply=manager->get(curriUrlReq);
    //        connect(curriUrlReply,&QNetworkReply::finished,[=](){

    //            QFile *curriculumFile=new QFile(QString(xnxq+"学期的课表.jpg"));

    //            if (!curriculumFile->open(QIODevice::WriteOnly)){
    //                delete curriculumFile;
    //                curriculumFile=nullptr;
    //                qDebug()<<"curriculumFile文件写入失败!";

    //            }
    //            else{
    //                QByteArray imgRaw=curriUrlReply->readAll();
    //                showText(imgRaw);
    //                QPixmap pixmap;
    //                pixmap.loadFromData(imgRaw);
    //                ui->curriculumLabel->setPixmap(pixmap);
    //                pixmap.scaled(ui->curriculumLabel->size(), Qt::KeepAspectRatio);
    //                curriculumFile->write(imgRaw);

    //            }
    //            curriculumFile->close();

    //            curriUrlReply->deleteLater();
    //            curriReply->deleteLater();
    //            curReply->deleteLater();
    //        });




}

