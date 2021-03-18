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
    explicit ExamArrangement_Ui(QWidget *parent = 0);
    ~ExamArrangement_Ui();

private:
    Ui::ExamArrangement_Ui *ui;
};

#endif // EXAMARRANGEMENT_UI_H
