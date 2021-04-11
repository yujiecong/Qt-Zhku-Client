#ifndef ZHKULOGINWIDGET_H
#define ZHKULOGINWIDGET_H

#include <QWidget>

#include "MoreWidget.h"
#include "global.h"
namespace Ui {
class ZhkuLoginWidget;
class ZhkuLoginWidgetByAndroid;
}
class QNetworkAccessManager;
class QNetworkReply;
class ZhkuLoginWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ZhkuLoginWidget(QWidget *parent = 0);
    ~ZhkuLoginWidget();

    void getLocalXNXQ();
    void loginInit();



protected:
    void closeEvent(QCloseEvent *event);
    void paintEvent(QPaintEvent *event);
private slots:
    void tryLogin();
    void getCodeImg();
    void writeSettings();
    void showMore();
    void queryCurriculum();
signals:
    void loginSuccessed();
private:

    QUrl zhkuHomeUrl=QUrl("http://jw.zhku.edu.cn/home.aspx");
    QUrl zhkuLoginCodeUrl=QUrl("http://jw.zhku.edu.cn/sys/ValidateCode.aspx");
    QUrl zhkuLoginHomeUrl=QUrl("http://jw.zhku.edu.cn/_data/login_home.aspx");
    QUrl zhkuTestUrl=QUrl("http://jw.zhku.edu.cn/frame/menu.aspx");
    MoreWidget *moreWidget;

    QString cookies;

    bool autoLogin=0;
    bool autoPassword=0;
    //配置文件
    const QString iniKey=QString("settings/loginSettings");
    QString iniPath;

//     QNetworkReply* getGetReply(QString url);
};

#endif // ZHKULOGINWIDGET_H
