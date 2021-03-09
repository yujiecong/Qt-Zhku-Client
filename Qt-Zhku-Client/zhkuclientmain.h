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

    enum Semester{
        FirstHalfSemeSter=0,
        SecondHalfSemester
    };
    void init_();
    void showText(QString &in);
    void showText(QByteArray &in);
    void getLocalXNXQ();

    inline QString gbk2Utf8(const QByteArray &inStr);
    inline QByteArray  toUrlEncode(const QByteArray  &inStr);
    inline QString getMd5( QString );
    QJsonObject qString2Json(QString jsonString);
    inline QString qJson2QString(QJsonObject jsonObject);

private slots:
    void tryLogin();
    void getCodeImg();
    void getCurriculum();
private:
    Ui::ZhkuClientMain *ui;
    QNetworkAccessManager *manager;
    QNetworkCookieJar cookie;

    QUrl zhkuHomeUrl=QUrl("http://jw.zhku.edu.cn/home.aspx");
    QUrl zhkuLoginCodeUrl=QUrl("http://jw.zhku.edu.cn/sys/ValidateCode.aspx");
    QUrl zhkuLoginHomeUrl=QUrl("http://jw.zhku.edu.cn/_data/login_home.aspx");
    QUrl zhkuCurriculumPreUrl=QUrl("http://jw.zhku.edu.cn/znpk/Pri_StuSel.aspx");
    QUrl zhkuCurriculumUrl=QUrl("http://jw.zhku.edu.cn/znpk/Pri_StuSel_rpt.aspx");
    QUrl zhkuTestUrl=QUrl("http://jw.zhku.edu.cn/wsxk/stu_xszx_rpt.aspx");


    QNetworkReply *codeReply=0;
    QFile *codeImg;
    QFile *pcook;

    static QString xnxq;

};

#endif // ZHKUCLIENTMAIN_H
