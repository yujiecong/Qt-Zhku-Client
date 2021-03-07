#ifndef ZHKUCLIENTMAIN_H
#define ZHKUCLIENTMAIN_H

#include <QMainWindow>
#include <QtNetwork>
namespace Ui {
class ZhkuClientMain;
}
class QNetworkAccessManager;
class QNetworkReply;
class ZhkuClientMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit ZhkuClientMain(QWidget *parent = 0);
    ~ZhkuClientMain();

    inline QString gbk2Utf8(const QByteArray &inStr);

private slots:
    void tryLogin();
    void replyFinished(QNetworkReply *);
    void getCodeImg();
private:
    Ui::ZhkuClientMain *ui;
    QNetworkAccessManager *manager;
    QNetworkCookieJar cookie;

    QUrl zhkuHomeUrl=QUrl("http://jw.zhku.edu.cn/home.aspx");
    QUrl zhkuLoginCodeUrl=QUrl("http://jw.zhku.edu.cn/sys/ValidateCode.aspx");

    QNetworkReply *codeReply=0;
    QFile *codeImg;

};

#endif // ZHKUCLIENTMAIN_H
