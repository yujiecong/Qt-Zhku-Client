#ifndef ZHKUCLIENTMAIN_H
#define ZHKUCLIENTMAIN_H
#include "global.h"
#include <QMainWindow>
#include <QMessageBox>
#include <QStandardItemModel>
#include <QSystemTrayIcon>
#include <QtNetwork>

#include "ZhkuLoginWidget.h"
#include "FuncTable.h"
#include "CurriculumArrangement_ui.h"
#include "QueryScore_Ui.h"
#include "ScoreDistubing_ui.h"
#include "Rankexam_Ui.h"
#include "ExamArrangement_Ui.h"
#include "Closed_404_Ui.h"
#include "UserAvater.h"
#include "Other_ChangeUserInfo_Ui.h"
#include "Default_Ui.h"
#include "ChoosingResult_Ui.h"
#include "SupplementChossing_Ui.h"
#include "RemoveChoosing_Ui.h"
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


protected:
    void closeEvent(QCloseEvent *e);

private slots:
    void loginSuccessed();
    void getUserInfo();

    void getCurriculumArrangement();
    void getStudentScore();
    void getDistributedScore();
    void getRankExam();
    void getExamArr();  //获取图片
    void getExamTurn(); //考试轮次

    void createCurriculumArrangement_Ui();
    void createQueryScore_Ui();
    void createDistributedScore_Ui();
    void createRankExam_Ui();
    void createExamArr_Ui();
    void create404_Ui();
    void createOtherChangeUserInfo_Ui();
    void createDefault_Ui(QString url);// 创建基本的ui 即只有text 的
    //学籍档案
    void createStudentBasicalInfo();//基本信息
    void createMinorRegistration();//辅修报名
    void createMinorInformation();//辅修信息
    void createRewardAndPunishmentInformation();//奖惩信息
    //注册信息
    void createRegisterInfo();
    void createAcademicWarning(); //学业预警
    void createApplicationVariation();//申请异动
    void createPreApplicationVariation();//预计异动
    //培养方案
    void createTheoryCourse();
    void createPraticalPart();
    void createGraduationDemanding();
    //网上选课
    void createPreChoosing();
    void createPreChoosingResult();
    void createChoosing();
    void createChoosingResult();
    void createSupplementChoosing();
    void createRemoveChoosing(); //退选
    void createCanceledChoosing();//被取消课程
    //
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
    //查询考试安排
    QUrl zhkuExamUrl=QUrl("http://jw.zhku.edu.cn/KSSW/stu_ksap_rpt.aspx");

    ZhkuLoginWidget *zhkuloginManager=new ZhkuLoginWidget();

    UserAvater *userAvater;
    FuncTable *campusOnHand;
    FuncTable *studentStatus;
    FuncTable *cultivationScheme;
    FuncTable *choiceLessons;
    FuncTable *curriculumArrangementTable;
    FuncTable *examinationArrangement;
    FuncTable *studentScore;
    FuncTable *textbookInfo;
    FuncTable *teacherComment;
    FuncTable *otherTable;

    CurriculumArrangement_Ui *currArrUi=0;
    QueryScore_Ui *queryScoreUi=0;
    ScoreDistubing_Ui *distributedScoreUi=0;
    RankExam_Ui *rankExmaUi=0;
    ExamArrangement_Ui *examArrUi=0;
    Closed_404_Ui *closed404Ui=0;
    Other_ChangeUserInfo_Ui *otherChangeUserInfoUi=0;
    Default_Ui *defaultUi=0;
    ChoosingResult_Ui *choosingUi=0;
    SupplementChossing_Ui *supplemntChoosingUi=0;
    RemoveChoosing_Ui *removeChoosingUi=0;

    //用于 查询更多课程的
    QString hiddenVaildationCode;
    bool hidyzmStatus=1;
    QSystemTrayIcon *sysTrayIcon=nullptr;
    //托盘bool
    bool closedMemery=0;

    void init_Connection();
    void init_();
    void initSysTaryIcon();

};

#endif // ZHKUCLIENTMAIN_H
