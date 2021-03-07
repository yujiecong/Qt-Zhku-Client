#include "zhkuclientmain.h"
#include "ui_zhkuclientmain.h"
#include <QDebug>
ZhkuClientMain::ZhkuClientMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ZhkuClientMain)
{
    ui->setupUi(this);
    manager=new QNetworkAccessManager(this);

    connect(ui->LoginButton,&QPushButton::clicked,this,&ZhkuClientMain::tryLogin);
}

ZhkuClientMain::~ZhkuClientMain()
{
    delete ui;
}

QString ZhkuClientMain::gbk2Utf8(const QByteArray &inStr)
{
    QTextCodec *gbk = QTextCodec::codecForName("GB18030");
    QString g2u = gbk->toUnicode(inStr);
    return g2u;
}

void ZhkuClientMain::tryLogin()
{
    //主页
    QNetworkRequest reqHome= QNetworkRequest(zhkuHomeUrl);
    reqHome.setRawHeader("User-Agent","Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/71.0.3573.0 Safari/537.36");
    reqHome.setRawHeader("Host","jw.zhku.edu.cn");
    manager->get(reqHome);
    //验证码
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
