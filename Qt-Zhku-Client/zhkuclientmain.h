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

    void init_();
    inline QString gbk2Utf8(const QByteArray &inStr);
    inline QByteArray  toUrlEncode(const QByteArray  &inStr);

    inline QString getMd5( QString );
private slots:
    void tryLogin();
    void replyFinished(QNetworkReply *);
    void getCodeImg();
    void test();
private:
    Ui::ZhkuClientMain *ui;
    QNetworkAccessManager *manager;
    QNetworkCookieJar cookie;

    QUrl zhkuHomeUrl=QUrl("http://jw.zhku.edu.cn/home.aspx");
    QUrl zhkuLoginCodeUrl=QUrl("http://jw.zhku.edu.cn/sys/ValidateCode.aspx");
    QUrl zhkuLoginHomeUrl=QUrl("http://jw.zhku.edu.cn/_data/login_home.aspx");

    QNetworkReply *codeReply=0;
    QFile *codeImg;

};

#endif // ZHKUCLIENTMAIN_H
