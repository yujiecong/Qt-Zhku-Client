#ifndef CURRICULUMARRANGEMENT_UI_H
#define CURRICULUMARRANGEMENT_UI_H

#include <QWidget>
// 课表查询页面的一个 ui

namespace Ui {
class CurriculumArrangement_Ui;
}

class CurriculumArrangement_Ui : public QWidget
{
    Q_OBJECT

public:
    explicit CurriculumArrangement_Ui(QString ,QWidget *parent = 0);
    ~CurriculumArrangement_Ui();
    Ui::CurriculumArrangement_Ui *ui;
    QString xnxq;
    //在网页请求里是 rad
    bool rad=0;
    bool zc_flag=0;
    QString zc_input;
//    bool sortType;
private:

};

#endif // CURRICULUMARRANGEMENT_UI_H
