#ifndef EXAMARRANGEMENT_UI_H
#define EXAMARRANGEMENT_UI_H

#include <QWidget>

namespace Ui {
class ExamArrangement_Ui;
}

class ExamArrangement_Ui : public QWidget
{
    Q_OBJECT

public:
    explicit ExamArrangement_Ui(QString xnxq,QWidget *parent = 0);
    ~ExamArrangement_Ui();

    inline int getlcxz();
    inline QString getlc();

signals:
    void queryExam();
    void currentIndexChanged(const QString &arg1);
private slots:
    void on_queryCurriculumBtn_clicked();

    void on_comboBox_2_currentIndexChanged(const QString &arg1);

private:
        QString xnxq;
    Ui::ExamArrangement_Ui *ui;
};

#endif // EXAMARRANGEMENT_UI_H
