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
    explicit QueryScore_Ui(QWidget *parent = 0);
    ~QueryScore_Ui();

private:
    Ui::QueryScore_Ui *ui;
};

#endif // QUERYSCORE_UI_H
