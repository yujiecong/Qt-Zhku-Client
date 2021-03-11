#ifndef SUBMENUBTN_H
#define SUBMENUBTN_H

#include <QWidget>

namespace Ui {
class SubMenuBtn;
}

class SubMenuBtn : public QWidget
{
    Q_OBJECT

public:
    explicit SubMenuBtn(QWidget *parent = 0);
    ~SubMenuBtn();
    int pos=0;
    Ui::SubMenuBtn *ui;
    bool isClicked=0;
protected:
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
signals:
    void changedBg(int );




};

#endif // SUBMENUBTN_H
