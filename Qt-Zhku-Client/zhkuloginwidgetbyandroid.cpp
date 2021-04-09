#include "zhkuloginwidgetbyandroid.h"
#include "ui_zhkuloginwidgetbyandroid.h"

ZhkuLoginWidgetByAndroid::ZhkuLoginWidgetByAndroid(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZhkuLoginWidgetByAndroid)
{
    ui->setupUi(this);
}

ZhkuLoginWidgetByAndroid::~ZhkuLoginWidgetByAndroid()
{
    delete ui;
}
