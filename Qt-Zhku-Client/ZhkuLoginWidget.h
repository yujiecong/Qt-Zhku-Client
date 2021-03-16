#ifndef ZHKULOGINWIDGET_H
#define ZHKULOGINWIDGET_H

#include <QWidget>

#include "global.h"
namespace Ui {
class ZhkuLoginWidget;
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

    static QString getXnxq();
    static void setXnxq(const QString &value);
    QNetworkAccessManager  manager;
protected:
    void closeEvent(QCloseEvent *event);
private slots:
    void tryLogin();
    void getCodeImg();
    void writeSettings();
private:
    Ui::ZhkuLoginWidget *ui;
    QUrl zhkuHomeUrl=QUrl("http://jw.zhku.edu.cn/home.aspx");
    QUrl zhkuLoginCodeUrl=QUrl("http://jw.zhku.edu.cn/sys/ValidateCode.aspx");
    QUrl zhkuLoginHomeUrl=QUrl("http://jw.zhku.edu.cn/_data/login_home.aspx");
    QUrl zhkuTestUrl=QUrl("http://jw.zhku.edu.cn/frame/menu.aspx");
    static QString xnxq;

    QFile *pointerCookies=nullptr;

    bool autoLogin=0;
    bool autoPassword=0;
    //配置文件



};

#endif // ZHKULOGINWIDGET_H
