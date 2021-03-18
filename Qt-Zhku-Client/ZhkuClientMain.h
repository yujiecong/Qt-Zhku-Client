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
#include "QueryScore_Ui.h"
#include "ScoreDistubing_ui.h"
#include "Rankexam_Ui.h"

#include "UserAvater.h"
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
    void init_Connection();
    void init_();
    void initSysTaryIcon();
protected:
    void closeEvent(QCloseEvent *e);

private slots:
    void loginSuccessed();
    void getUserInfo();

    void getCurriculum();
    void getStudentScore();
    void getDistributedScore();
    void getRankExam();

    void createCurriculumArrangement_Ui();
    void createQueryScore_Ui();
    void createDistributedScore_Ui();
    void createRankExam_Ui();

    void removeMyUi();

private:
    Ui::ZhkuClientMain *ui;

    QNetworkCookieJar cookie;
    //拿到在线人数 日期等
    QUrl zhkuMainNavigatorUrl=QUrl("http://jw.zhku.edu.cn/SYS/Main_banner.aspx");
    //拿到学生名字学号
    QUrl zhkuFootUrl=QUrl("http://jw.zhku.edu.cn/PUB/foot.aspx");
    //访问课程前需要访问这个
    QUrl zhkuCurriculumPreUrl=QUrl("http://jw.zhku.edu.cn/znpk/Pri_StuSel.aspx");
    //访问课程图片 url
    QUrl zhkuCurriculumUrl=QUrl("http://jw.zhku.edu.cn/znpk/Pri_StuSel_rpt.aspx");
    //成绩url
    QUrl zhkuStudentScoreUrl=QUrl("http://jw.zhku.edu.cn/xscj/Stu_MyScore_rpt.aspx");
    //成绩分布
    QUrl zhkuScoreDisUrl=QUrl("http://jw.zhku.edu.cn/xscj/Stu_cjfb_rpt.aspx");
    //查看等级考试
    QUrl zhkuRankExamUrl=QUrl("http://jw.zhku.edu.cn/xscj/private/list_xhxm.aspx");

    ZhkuLoginWidget *zhkuloginManager=new ZhkuLoginWidget();

    UserAvater *userAvater;
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
    RankExam_Ui *rankExmaUi=0;
    //用于 查询课程的
    QString hiddenVaildationCode;
    bool hidyzmStatus=1;
    QSystemTrayIcon *sysTrayIcon=nullptr;
    //托盘bool
    bool closedMemery=0;

};

#endif // ZHKUCLIENTMAIN_H
