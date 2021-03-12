#ifndef SUBMENUBTN_H
#define SUBMENUBTN_H

#include "submenuwidget.h"
#include "ui_submenuwidget.h"
#include <QWidget>

namespace Ui {
class SubMenuBtn;
}
class SubMenuWidget;
class SubMenuBtn : public QWidget
{
    Q_OBJECT

public:
    explicit SubMenuBtn(QWidget *parent = 0);
    ~SubMenuBtn();
    int pos=0;
    Ui::SubMenuBtn *ui;

    SubMenuWidget *subWidget=0;

    void addSubBtn(QString, QString pixpath, QString url);
    void addSubBtn(QStringList, QString pixpath, QString url);
    bool isClicked=0;
    const int pixWidth=16;
    const int pixHeight=16;
    int count=0;

    void unfoldAnimation();

protected:
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);

signals:
    void changedBg(int );
    void clicked();




};

#endif // SUBMENUBTN_H
