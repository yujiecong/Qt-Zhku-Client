#ifndef ZHKUCLIENTMAIN_H
#define ZHKUCLIENTMAIN_H
#include "global.h"
#include <QMainWindow>
#include <QStandardItemModel>
#include <QtNetwork>

#include "ZhkuLoginWidget.h"
#include "FuncTable.h"
#include "CurriculumArrangement_ui.h"
#include "ui_curriculumarrangement_ui.h"
#include "QueryScore_Ui.h"
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
    void createCurriculumArrangement_Ui();
    void createQueryScore_Ui();

    void removeMyUi();

private:
    Ui::ZhkuClientMain *ui;

    QNetworkCookieJar cookie;


    QUrl zhkuCurriculumPreUrl=QUrl("http://jw.zhku.edu.cn/znpk/Pri_StuSel.aspx");
    QUrl zhkuCurriculumUrl=QUrl("http://jw.zhku.edu.cn/znpk/Pri_StuSel_rpt.aspx");


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

    //用于 查询课程的
    QString hiddenVaildationCode;
    bool hidyzmStatus=1;

};

#endif // ZHKUCLIENTMAIN_H
