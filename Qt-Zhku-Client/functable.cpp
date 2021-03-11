#include "functable.h"

#include <QLabel>
#include <QMouseEvent>
#include <QPainter>

#include <QPushButton>
#include "QDebug"

FuncTable::FuncTable(QWidget *parent) : QWidget(parent)
{
    subWidget=new SubMenuWidget();
}

void FuncTable::addSubBtn(QString s,QString pixpath,QString url)
{
    SubMenuBtn *btn= new SubMenuBtn();

    QPixmap pix(pixpath);
    pix.scaled(pixWidth,pixHeight,Qt::KeepAspectRatio);

    btn->ui->label->setPixmap(pix);
    btn->pos=count++;
    btn->ui->label_2->setText(s);

    subWidget->ui->verticalLayout->addWidget(btn);
    subWidget->v.append(btn);

    connect(btn,&SubMenuBtn::changedBg,subWidget,&SubMenuWidget::changeSubBg);
}

void FuncTable::mousePressEvent(QMouseEvent *event)
{

    if(event->button()==Qt::LeftButton){
        isClicked=isClicked==1?0:1;

        if(isClicked){
            //展开下面的按钮
            subWidget->show();

        }
        else{
            subWidget->hide();
        }
        repaint();
        QWidget::mousePressEvent(event);
    }

}

void FuncTable::paintEvent(QPaintEvent *event)
{

    if (isClicked){
        QPainter painter(this);
        painter.setRenderHint(QPainter::Antialiasing);
        painter.setBrush(QColor(72,99,231));
        painter.setPen(Qt::transparent);
        QRect rect = this->rect();
        rect.setWidth(rect.width() - 1);
        rect.setHeight(rect.height() - 1);
        painter.drawRoundedRect(rect, 5, 5);
    }

    QWidget::paintEvent(event);
}

