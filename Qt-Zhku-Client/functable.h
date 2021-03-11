#ifndef FUNCTABLE_H
#define FUNCTABLE_H

#include <QObject>
#include <QWidget>
#include "submenuwidget.h"
#include "ui_submenuwidget.h"
#include "ui_submenubtn.h"

#include "submenubtn.h"
class FuncTable : public QWidget
{
    Q_OBJECT
public:
    explicit FuncTable(QWidget *parent = nullptr);
    void addSubBtn(QString, QString pixpath, QString url);
    //其实就是一个布局
    SubMenuWidget *subWidget=0;

protected:
    void mousePressEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);

private:
    bool isClicked=0;
    const int pixWidth=16;
     const int pixHeight=16;
     int count=0;


public slots:


};

#endif // FUNCTABLE_H
