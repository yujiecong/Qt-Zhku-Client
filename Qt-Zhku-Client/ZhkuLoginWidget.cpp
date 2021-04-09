#include "MoreWidget.h"
#include "ZhkuLoginWidget.h"
#include "ui_zhkuloginwidget.h"

#include "global.h"
#include <QGuiApplication>
#include <QMessageBox>
#include <QMouseEvent>
#include <QPainter>
#include <QScreen>
#include <ui_zhkuloginwidgetbyandroid.h>
#if defined(Q_OS_ANDROID)
    Ui::ZhkuLoginWidgetByAndroid *ui=new Ui::ZhkuLoginWidgetByAndroid;
#else
    Ui::ZhkuLoginWidget *ui=new Ui::ZhkuLoginWidget;
#endif
ZhkuLoginWidget::ZhkuLoginWidget(QWidget *parent) :
    QWidget(parent)
{

    ui->setupUi(this);

    QRect screenRect = QGuiApplication::primaryScreen()->geometry();
//    ui->widget->setFixedSize(screenRect);
    ui->loginButton->setShortcut(Qt::Key_Enter);
    ui->loginButton->setShortcut(Qt::Key_Return);

    connect(ui->loginButton,&QPushButton::clicked,this,&ZhkuLoginWidget::tryLogin);
    connect(ui->loginButton_2,&QPushButton::clicked,this,&ZhkuLoginWidget::showMore);

    setWindowTitle("仲恺教务网客户端-未登录");
    setWindowIcon(QIcon(":/assets/zhkuImg/logo.jpg"));

    show();
    loginInit();
}

ZhkuLoginWidget::~ZhkuLoginWidget()
{

    delete ui;
}

void ZhkuLoginWidget::getLocalXNXQ()
{
    QDate date(QDate::currentDate());
    int year = date.year()-1;
    int month = date.month();
    //可以用 ? : 的形式
    if (month>8 || month <3){
        setXnxq(QString::number(year)+QString::number(Semester::FirstHalfSemeSter));
    }
    else{
        setXnxq(xnxq=QString::number(year)+QString::number(Semester::SecondHalfSemester));
    }
    qDebug()<<"当前学年学期为"<<xnxq;
}
void ZhkuLoginWidget::loginInit()
{

    QSettings *settings = new QSettings(iniPath,QSettings::IniFormat);
    settings->setIniCodec(QTextCodec::codecForName("UTF-8"));
    //取值与赋值
    QString settingsString=settings->value(iniKey).toString();
    QJsonObject settingsJson=strProcessor.qString2Json(settingsString);
    qDebug()<<settingsString.toLocal8Bit().data();

    getLocalXNXQ();

    cookies=settingsJson["cookies"].toString();
    //如果设置了自动登录


    autoLogin=settingsJson["autoLogin"].toBool();
    autoPassword=settingsJson["autoPassword"].toBool();

    if(autoPassword){
        ui->pwdInput->setText(settingsJson["password"].toString());
        ui->checkBox_2->setChecked(1);
    }

    if(autoLogin && cookies!=""){
        ui->checkBox->setChecked(1);
        qDebug()<<"正在自动登录";

        QJsonObject json=strProcessor.qString2Json(cookies);
        QNetworkCookieJar *jar=manager.cookieJar();
        QList<QNetworkCookie> allcookies;
        foreach (QString k, json.keys()) {
            QString v=json.take(k).toString();
            QNetworkCookie c(k.toLocal8Bit(),v.toLocal8Bit());
            allcookies.append(c);
        }

        jar->setCookiesFromUrl(allcookies,zhkuLoginHomeUrl);
        jar->setCookiesFromUrl(allcookies,zhkuTestUrl);
        jar->setCookiesFromUrl(allcookies,zhkuHomeUrl);
        jar->setCookiesFromUrl(allcookies,zhkuLoginCodeUrl);

        manager.setCookieJar(jar);

        // //判断cookies是否过期
        QNetworkRequest isvaildTest(zhkuTestUrl);
        QVariant var;
        var.setValue(allcookies);
        isvaildTest.setHeader(QNetworkRequest::CookieHeader,var);

        QNetworkReply *testReply=manager.get(isvaildTest);

        connect(testReply,&QNetworkReply::finished,[=](){
            QString loginRead=strProcessor.gbk2Utf8(testReply->readAll());
            //                qDebug()<<readTest;
            if (loginRead.contains(QString("无权"))){
                qDebug()<<"cookies 已失效,请重新登录";
                settings->remove(iniKey);
                loginInit();
            }
            else if(loginRead.contains(QString("您被强迫下线"))){
                qDebug()<<"cookies 显示你在别处登录!";
                qDebug()<<"cookies 已失效,请重新登录";
                settings->remove(iniKey);
                loginInit();

            }
            else if(loginRead.contains(QString("教学安排表"))){
                qDebug()<<"cookies仍然有效!";
                emit loginSuccessed();
            }
            testReply->deleteLater();

        });

    }
    else{
        qDebug()<<"本地未检测到cookies 或者cookies已经失效";

        //主页
        QNetworkRequest reqHome= QNetworkRequest(zhkuHomeUrl);
        reqHome.setRawHeader("User-Agent","Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3573.0 Safari/537.36");
        reqHome.setRawHeader("Host","jw.zhku.edu.cn");


        //验证码
        QNetworkReply *homeReply=manager.get(reqHome);
        connect(homeReply,&QNetworkReply::finished,[=](){getCodeImg();homeReply->deleteLater();});

    }
}

QString ZhkuLoginWidget::getXnxq()
{
    return xnxq;
}

void ZhkuLoginWidget::setXnxq(const QString &value)
{
    xnxq = value;
}

void ZhkuLoginWidget::closeEvent(QCloseEvent *event)
{

    event->accept();
}

void ZhkuLoginWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setPen(Qt::transparent);
    QRect rect = this->rect();
    rect.setWidth(rect.width() - 1);
    rect.setHeight(rect.height() - 1);
    painter.drawRoundedRect(rect, 10, 10);
}

void ZhkuLoginWidget::tryLogin()
{

    QString pwd=ui->pwdInput->text();
    QString acc=ui->accountInput->text();

    QString md5_1=strProcessor.getMd5(acc+strProcessor.getMd5(pwd).mid(0,30).toUpper()+"11347").mid(0,30).toUpper();

    QString code=ui->codeInput->text();

    QString md5_2=strProcessor.getMd5(strProcessor.getMd5(code.toUpper()).mid(0,30).toUpper()+"11347").mid(0,30).toUpper();



    QNetworkRequest loginReq(zhkuLoginHomeUrl);
    loginReq.setRawHeader("Content-Type", "application/x-www-form-urlencoded");
    loginReq.setRawHeader("Host", "jw.zhku.edu.cn");
    loginReq.setRawHeader("Origin", "http://jw.zhku.edu.cn");
    loginReq.setRawHeader("Referer", "http://jw.zhku.edu.cn/_data/home_login.aspx");
    loginReq.setRawHeader("User-Agent", "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3573.0 Safari/537.36");

    QByteArray postdata;
    //将 sb字符变成url编码，操
    postdata.append("typeName="+strProcessor.toUrlEncode("ѧ��")+"&");
    postdata.append(QString("dsdsdsdsdxcxdfgfg="+md5_1+"&"));
    postdata.append(QString("fgfggfdgtyuuyyuuckjg="+md5_2+"&"));
    postdata.append("Sel_Type=STU&");
    postdata.append(QString("txt_asmcdefsddsd=")+acc+"&");

    postdata.append("txt_pewerwedsdfsdff=&");
    postdata.append("txt_sdertfgsadscxcadsads=&");
    postdata.append("txt_mm_lxpd=&");
    postdata.append("txt_psasas="+strProcessor.toUrlEncode("����������"));



    QNetworkReply *loginReply=manager.post(loginReq,postdata);


    connect(loginReply,&QNetworkReply::finished,[=](){
        QString loginHtml=strProcessor.gbk2Utf8(loginReply->readAll());

        if (loginHtml.contains("正在加载")){
            //保存cookies
            qDebug()<<"未检测到本地cookies,开始保存cookies";
            qDebug()<<manager.cookieJar()->cookiesForUrl(zhkuLoginHomeUrl);

            writeSettings();
            emit loginSuccessed();

        }
        else{
            QMessageBox::warning(this,"登录失败","账号或密码或者验证码错误!");
            //再次调用验证码api
            getCodeImg();
        }

        loginReply->deleteLater();
    });

}

void ZhkuLoginWidget::getCodeImg()
{    //开始下载验证码
    QFile *codeImg=nullptr;
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
        QNetworkReply *codeReply=manager.get(reqCode);
        connect(codeReply,&QNetworkReply::finished,[=](){
            qDebug()<<manager.cookieJar();
            QByteArray codeRaw=codeReply->readAll();
            QPixmap pixmap;
            pixmap.loadFromData(codeRaw);

            ui->codeInput->setPixmap(pixmap);

            codeImg->write(codeRaw);
            codeImg->close();
            codeReply->deleteLater();
        });
    }

}

void ZhkuLoginWidget::writeSettings()
{
    //    }
    QList<QNetworkCookie> l=manager.cookieJar()->cookiesForUrl(zhkuLoginHomeUrl);
    QJsonObject json;
    foreach (QNetworkCookie c, l) {
        json.insert(QString(c.name()),QString(c.value()));
    }
    QString strjson=strProcessor.qJson2QString(json);

    qDebug()<<"cookies文件写入成功!";
    QSettings *settings = new QSettings(QCoreApplication::applicationDirPath()+"/Zhku.ini",QSettings::IniFormat);;
    settings->clear();
    settings->setIniCodec(QTextCodec::codecForName("UTF-8"));
    QJsonObject settingsJson;
    settingsJson.insert("autoLogin",ui->checkBox->isChecked());
    settingsJson.insert("autoPassword",ui->checkBox_2->isChecked());
    settingsJson.insert("cookies",strjson);
    if(ui->checkBox_2->isChecked()){
        settingsJson.insert("password",ui->pwdInput->text());
    }
    settings->setValue(iniKey,QString(strProcessor.qJson2QString(settingsJson)));
    settings->sync();
}

void ZhkuLoginWidget::showMore()
{
    moreWidget =new MoreWidget(getXnxq());
    connect(moreWidget,&MoreWidget::signalsGetCodeImg,this,&ZhkuLoginWidget::getCodeImg);

    queryCurriculum();

    moreWidget->show();
}

void ZhkuLoginWidget::queryCurriculum()
{
    QNetworkReply *rp=getReqReply("http://jw.zhku.edu.cn/ZNPK/KBFB_LessonSel.aspx");
    connect(rp,&QNetworkReply::finished,[=](){
        QString html=strProcessor.gbk2Utf8(rp->readAll());

        QNetworkReply *rptRp=getReqReply("http://jw.zhku.edu.cn/ZNPK/KBFB_LessonSel_rpt.aspx");
        connect(rptRp,&QNetworkReply::finished,[=](){
            //
            QNetworkReply *kcRep=getReqReply(tr("http://jw.zhku.edu.cn/ZNPK/Private/List_XNXQKC.aspx?xnxq=%1").arg(moreWidget->getXnxq()));
            connect(kcRep,&QNetworkReply::finished,[=](){
                qDebug()<<strProcessor.gbk2Utf8(kcRep->readAll());
                kcRep->deleteLater();
            });
            rptRp->deleteLater();
        });
        rp->deleteLater();
    });
}


