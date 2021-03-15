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
private:

    QString xnxq;
};

#endif // QUERYSCORE_UI_H
