#include "FuncTable.h"

#include <QLabel>
#include <QMouseEvent>
#include <QPainter>

#include <QPushButton>
#include "QDebug"

FuncTable::FuncTable(QString str, QWidget *parent) : QWidget(parent),ui(new Ui::FuncTable)
{
    ui->setupUi(this);
    subWidget=new SubMenuWidget();
    ui->textLabel->setText(str);

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
            ui->arrowLabel->setPixmap(QPixmap(":/assets/arrow/Arrow Circle down 2 - 24px.svg"));
        }
        else{
            subWidget->hide();
            ui->arrowLabel->setPixmap(QPixmap(":/assets/arrow/Arrow Circle up 2 - 24px.svg"));
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

