#ifndef RANKEXAM_UI_H
#define RANKEXAM_UI_H

#include <QWidget>

namespace Ui {
class RankExam_Ui;
}

class RankExam_Ui : public QWidget
{
    Q_OBJECT

public:
    explicit RankExam_Ui(QWidget *parent = 0);
    ~RankExam_Ui();

    void setHtml(QString html) const;

private:
    Ui::RankExam_Ui *ui;
};

#endif // RANKEXAM_UI_H
