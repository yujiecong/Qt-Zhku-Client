#ifndef ZHKUCLIENTMAIN_H
#define ZHKUCLIENTMAIN_H
#include "global.h"
#include <QMainWindow>
#include <QStandardItemModel>
#include <QSystemTrayIcon>
#include <QtNetwork>

#include "ZhkuLoginWidget.h"
#include "FuncTable.h"
#include "CurriculumArrangement_ui.h"
#include "ui_curriculumarrangement_ui.h"
#include "QueryScore_Ui.h"
#include "ui_QueryScore_Ui.h"

#include "ScoreDistubing_ui.h"
#include "ui_ScoreDistubing_ui.h"
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
    void initSysTaryIcon();
protected:
    void closeEvent(QCloseEvent *e);

private slots:
    void getCurriculum();
    void getStudentScore();
    void getDistributedScore();

    void createCurriculumArrangement_Ui();
    void createQueryScore_Ui();
    void createDistributedScore_Ui();

    void removeMyUi();

private:
    Ui::ZhkuClientMain *ui;

    QNetworkCookieJar cookie;


    QUrl zhkuCurriculumPreUrl=QUrl("http://jw.zhku.edu.cn/znpk/Pri_StuSel.aspx");
    QUrl zhkuCurriculumUrl=QUrl("http://jw.zhku.edu.cn/znpk/Pri_StuSel_rpt.aspx");
    QUrl zhkuStudentScoreUrl=QUrl("http://jw.zhku.edu.cn/xscj/Stu_MyScore_rpt.aspx");
    QUrl zhkuScoreDisUrl=QUrl("http://jw.zhku.edu.cn/xscj/Stu_cjfb_rpt.aspx");


    ZhkuLoginWidget *zhkuloginManager=new ZhkuLoginWidget();
    FuncTable *campusOnHand;
    FuncTable *studentStatus;
    FuncTable *cultivationScheme;
    FuncTable *choiceLessons;
    FuncTable *curriculumArrangementTable;
    FuncTable *examinationRoll;
    FuncTable *studentScore;
    FuncTable *textbookInfo;
    FuncTable *teacherComment;
    FuncTable *otherTable;

    CurriculumArrangement_Ui *currArrUi=0;
    QueryScore_Ui *queryScoreUi=0;
    ScoreDistubing_Ui *distributedScoreUi=0;

    //用于 查询课程的
    QString hiddenVaildationCode;
    bool hidyzmStatus=1;
    QSystemTrayIcon *sysTrayIcon=nullptr;
    //托盘bool
    bool closedMemery=0;

};

#endif // ZHKUCLIENTMAIN_H
