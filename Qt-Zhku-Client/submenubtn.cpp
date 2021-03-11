#include "submenubtn.h"
#include "ui_submenubtn.h"

#include <QMouseEvent>
#include <QPainter>

SubMenuBtn::SubMenuBtn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubMenuBtn)
{
    ui->setupUi(this);
}

SubMenuBtn::~SubMenuBtn()
{
    delete ui;
}

void SubMenuBtn::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton){
            emit changedBg(pos);
//        isClicked=isClicked==0?1:0;
    }
//    QWidget::mousePressEvent(event);
}

void SubMenuBtn::paintEvent(QPaintEvent *event)
{
    if (isClicked){
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.setBrush(QColor(46,62,126));
        painter.setPen(Qt::transparent);
        QRect rect = this->rect();
        rect.setWidth(rect.width() - 1);
        rect.setHeight(rect.height() - 1);
        painter.drawRoundedRect(rect, 5, 5);
    }


    QWidget::paintEvent(event);
}
