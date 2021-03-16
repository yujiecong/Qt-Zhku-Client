#ifndef QUERYSCORE_UI_H
#define QUERYSCORE_UI_H

#include <QWidget>

namespace Ui {
class QueryScore_Ui;
}

class QueryScore_Ui : public QWidget
{
    Q_OBJECT

public:
    explicit QueryScore_Ui(QString xnxq,QWidget *parent = 0);
    ~QueryScore_Ui();
    Ui::QueryScore_Ui *ui;
        int byWhat=2;
        bool scoreType=1;
        bool learnType=0;
    QString xnxq;
private slots:
    void on_fromFreshToNow_clicked();

    void on_byYear_clicked();

    void on_bySemester_clicked();

    void on_mainlyLearn_clicked();

    void on_otherlyLearn_clicked();

private:

};

#endif // QUERYSCORE_UI_H
