#include "Default_Ui.h"
#include "ui_Default_Ui.h"
#include "global.h"
Default_Ui::Default_Ui(QWidget *parent) :
    WidgetWithHtml(parent),
    ui(new Ui::Default_Ui)
{
    ui->setupUi(this);
}

Default_Ui::~Default_Ui()
{
    delete ui;
}

void Default_Ui::setHtml(QString url)
{
     QNetworkReply *rep=getReqReply(url);

     connect(rep,&QNetworkReply::finished,[=](){
         QString html=strProcessor.gbk2Utf8(rep->readAll());
         ui->textBrowser->setHtml(html);
         rep->deleteLater();
     });
}
