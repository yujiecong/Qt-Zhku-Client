#include "zhkuloginwidgetbyandroid.h"
#include "ui_zhkuloginwidgetbyandroid.h"
#include <QScreen>
ZhkuLoginWidgetByAndroid::ZhkuLoginWidgetByAndroid(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZhkuLoginWidgetByAndroid)
{
    ui->setupUi(this);
    screen= qApp->primaryScreen();

    //要设置需要的屏幕方向，才能收到QScreen的orientationChanged信号
    screen->setOrientationUpdateMask(
                    Qt::PortraitOrientation
                    | Qt::LandscapeOrientation
                | Qt::InvertedLandscapeOrientation);
    connect(screen,&QScreen::orientationChanged,[=](){
        if(screen->orientation()==Qt::LandscapeOrientation){

        }
    });
}

ZhkuLoginWidgetByAndroid::~ZhkuLoginWidgetByAndroid()
{
    delete ui;
}
