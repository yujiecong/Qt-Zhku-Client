#ifndef CHOOSINGRESULT_UI_H
#define CHOOSINGRESULT_UI_H

#include <QWidget>

namespace Ui {
class ChoosingResult_Ui;
}

class ChoosingResult_Ui : public QWidget
{
    Q_OBJECT

public:
    explicit ChoosingResult_Ui(QWidget *parent = nullptr);
    ~ChoosingResult_Ui();

private:
    Ui::ChoosingResult_Ui *ui;
};

#endif // CHOOSINGRESULT_UI_H
