#include "submenubtn.h"
#include "ui_submenubtn.h"

#include <QMouseEvent>
#include <QPainter>

SubMenuBtn::SubMenuBtn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubMenuBtn)
{
    ui->setupUi(this);
    subWidget=new SubMenuWidget();
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

    btn->ui->label->setPixmap(pix);
    btn->pos=count++;
    btn->ui->label_2->setText(s);

    subWidget->ui->verticalLayout->addWidget(btn);
    subWidget->v.append(btn);

    connect(btn,&SubMenuBtn::changedBg,subWidget,&SubMenuWidget::changeSubBg);
}

void SubMenuBtn::addSubBtn(QStringList sl, QString pixpath, QString url)
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

void SubMenuBtn::mousePressEvent(QMouseEvent *event)
{
    if(event->button()==Qt::LeftButton){
        emit changedBg(pos);
        emit clicked();
        if(subWidget->v.size()>0){
            if(isClicked){
                 subWidget->show();
            }
            else{
                subWidget->hide();
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
