#include "FuncTable.h"

#include <QLabel>
#include <QMouseEvent>
#include <QPainter>
#include <QPropertyAnimation>
#include <QTimer>

#include <QPushButton>
#include "QDebug"

FuncTable::FuncTable(QString str, QWidget *parent) : QWidget(parent),ui(new Ui::FuncTable)
{
    ui->setupUi(this);
    subWidget=new SubMenuWidget();
    ui->textLabel->setText(str);
    ui->arrowLabel->setPixmap(QPixmap(":/assets/arrow/up.png"));

}

void FuncTable::addSubBtn(QString s,QString pixpath,QString url)
{
    SubMenuBtn *btn= new SubMenuBtn();
    curBtn=btn;
    QPixmap pix(pixpath);
    pix.scaled(pixWidth,pixHeight,Qt::KeepAspectRatio);

    btn->ui->label->setPixmap(pix);
    btn->pos=count++;
    btn->ui->label_2->setText(s);

    subWidget->ui->verticalLayout->addWidget(btn);
    subWidget->v.append(btn);

    connect(btn,&SubMenuBtn::changedBg,subWidget,&SubMenuWidget::changeSubBg);
}

void FuncTable::addSubBtn(QStringList sl, QString pixpath, QString url)
{
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

void FuncTable::setPix(QString url)
{
    ui->iconLabel->setPixmap(QPixmap(url));
}

void FuncTable::mousePressEvent(QMouseEvent *event)
{

    if(event->button()==Qt::LeftButton){
        isClicked=isClicked==1?0:1;
        if(isClicked){
            //展开下面的按钮
            subWidget->show();
//            _max=subWidget->geometry();
//            qDebug()<<_max;
//            unfoldAnimation(1);
//            QTimer::singleShot(1,[=](){});

            ui->arrowLabel->setPixmap(QPixmap(":/assets/arrow/down.png"));
        }
        else{

//            unfoldAnimation(0);
                subWidget->hide();
            ui->arrowLabel->setPixmap(QPixmap(":/assets/arrow/up.png"));
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

void FuncTable::unfoldAnimation(bool dire)
{

    QPropertyAnimation *ani=new QPropertyAnimation(subWidget,"geometry");
//    ani->setParent(this);

    ani->setDuration(500);
//    ani->setEasingCurve(QEasingCurve::InOutQuad);


    if (dire){
        ani->setStartValue(QRect(_max.x(),_max.y(),_max.width(),0));
        ani->setEndValue(_max);
    }
    else{
        ani->setStartValue(_max);
        ani->setEndValue(QRect(_max.x(),_max.y(),_max.width(),0));
    }


    if (dire)

        connect(ani,&QPropertyAnimation::finished,[=](){
             qDebug()<<subWidget->geometry();
        });
    else
        connect(ani,&QPropertyAnimation::finished,[=](){subWidget->hide();});

    ani->start();

}

