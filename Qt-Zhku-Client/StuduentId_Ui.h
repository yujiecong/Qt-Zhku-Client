#ifndef STUDUENTID_UI_H
#define STUDUENTID_UI_H

#include <QWidget>

namespace Ui {
class StuduentId_Ui;
}

class StuduentId_Ui : public QWidget
{
    Q_OBJECT

public:
    explicit StuduentId_Ui(QWidget *parent = nullptr);
    ~StuduentId_Ui();

private:
    Ui::StuduentId_Ui *ui;
};

#endif // STUDUENTID_UI_H
