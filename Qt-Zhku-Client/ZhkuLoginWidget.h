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
private slots:
    void tryLogin();
    void getCodeImg();
private:
    Ui::ZhkuLoginWidget *ui;
    QUrl zhkuHomeUrl=QUrl("http://jw.zhku.edu.cn/home.aspx");
    QUrl zhkuLoginCodeUrl=QUrl("http://jw.zhku.edu.cn/sys/ValidateCode.aspx");
    QUrl zhkuLoginHomeUrl=QUrl("http://jw.zhku.edu.cn/_data/login_home.aspx");
    QUrl zhkuTestUrl=QUrl("http://jw.zhku.edu.cn/wsxk/stu_xszx_rpt.aspx");
    static QString xnxq;
    QFile *pointerCookies=nullptr;
};

#endif // ZHKULOGINWIDGET_H
