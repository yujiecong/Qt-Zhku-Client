#include "SubMenuBtn.h"
#include "ui_submenubtn.h"

#include <QMouseEvent>
#include <QPainter>
#include <QPropertyAnimation>
#include"QDebug"
SubMenuBtn::SubMenuBtn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubMenuBtn)
{
    ui->setupUi(this);
    subWidget=new SubMenuWidget();
    ui->label_3->hide();
}

SubMenuBtn::~SubMenuBtn()
{
    delete ui;
}

void SubMenuBtn::addSubBtn(QString s, QString pixpath, QString url)
{
    SubMenuBtn *btn= new SubMenuBtn();

    QPixmap pix(pixpath);
    pix.scaled(pixWidth,pixHeight,Qt::KeepAspectRatio);
    ui->label_3->show();
    btn->ui->label->setPixmap(pix);
    btn->pos=count++;
    btn->ui->label_2->setText(s);

    subWidget->ui->verticalLayout->addWidget(btn);
    subWidget->v.append(btn);

    connect(btn,&SubMenuBtn::changedBg,subWidget,&SubMenuWidget::changeSubBg);
}

void SubMenuBtn::addSubBtn(QStringList sl, QString pixpath, QString url)
{
    ui->label_3->show();
    foreach (QString s, sl) {
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
}

void SubMenuBtn::unfoldAnimation()
{
//    待优化
//    QPropertyAnimation *ani=new QPropertyAnimation(subWidget,"geometry");

//    ani->setDuration(1000);
//    ani->setEasingCurve(QEasingCurve::OutInCirc);
//    ani->setStartValue(QRect(0,0,0,0));
//    qDebug()<<subWidget->rect();
//    ani->setEndValue(subWidget->rect());
//    ani->start();
//    connect(ani,&QPropertyAnimation::finished,subWidget,&SubMenuWidget::show);

}

void SubMenuBtn::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton){
        emit changedBg(pos);
        emit clicked();
        if(subWidget->v.size()>0){
            if(isClicked){
                  subWidget->show();
                 ui->label_3->setPixmap(QPixmap(":/assets/btnIcon/arrow down.png"));
            }
            else{
                subWidget->hide();
                 ui->label_3->setPixmap(QPixmap(":/assets/btnIcon/arrow-up.png"));
            }

        }


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
