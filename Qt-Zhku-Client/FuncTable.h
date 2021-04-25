#ifndef FUNCTABLE_H
#define FUNCTABLE_H

#include <QObject>
#include <QWidget>
#include "SubMenuWidget.h"
#include "ui_submenuwidget.h"
#include "ui_submenubtn.h"
#include "ui_functable.h"

#include "SubMenuBtn.h"

// 主要界面的选择的一个按钮
namespace Ui {
class FuncTable;
}


class FuncTable : public QWidget
{
    Q_OBJECT
public:
    explicit FuncTable(QString str,QWidget *parent = nullptr);
    void addSubBtn(QString, QString pixpath, QString url);
    void addSubBtn(QStringList, QString pixpath, QString url);
    void setPix(QString url);
    //其实就是一个布局
    SubMenuWidget *subWidget=0;
    Ui::FuncTable *ui;
    SubMenuBtn *curBtn=0;
signals:
    void changeArrow(int);
protected:
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);

private:
    bool isClicked=0;
    const int pixWidth=16;
    const int pixHeight=16;
    int count=0;
    QRect _max;
    void unfoldAnimation(bool dire);



public slots:


};

#endif // FUNCTABLE_H
