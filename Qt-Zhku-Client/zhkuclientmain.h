#ifndef ZHKUCLIENTMAIN_H
#define ZHKUCLIENTMAIN_H
#include "global.h"
#include <QMainWindow>
#include <QStandardItemModel>
#include <QtNetwork>

#include "zhkuloginwidget.h"
#include "functable.h"
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


private slots:
    void getCurriculum();


private:
    Ui::ZhkuClientMain *ui;

    QNetworkCookieJar cookie;


    QUrl zhkuCurriculumPreUrl=QUrl("http://jw.zhku.edu.cn/znpk/Pri_StuSel.aspx");
    QUrl zhkuCurriculumUrl=QUrl("http://jw.zhku.edu.cn/znpk/Pri_StuSel_rpt.aspx");


    ZhkuLoginWidget *zhkuloginManager=new ZhkuLoginWidget();

    FuncTable *curriculumArrangementTable;

};

#endif // ZHKUCLIENTMAIN_H
