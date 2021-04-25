#include "UserAvater.h"
#include "ui_UserAvater.h"

#include <QPainter>

UserAvater::UserAvater(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserAvater)
{
    ui->setupUi(this);
    ui->avater->setAlignment(Qt::AlignCenter);
}

UserAvater::~UserAvater()
{
    delete ui;
}

QString UserAvater::getCurWeek() const
{
    return curWeek;
}

void UserAvater::setCurWeek(const QString &value)
{
    curWeek = value;
    ui->week->setText(curWeek);
}



QString UserAvater::getName() const
{
    return name;
}

void UserAvater::setName(const QString &value)
{
    name = value;
    ui->name->setText(name);
}

int UserAvater::getOnline() const
{
    return online;

}

void UserAvater::setOnline(int value)
{
    online = value;
    this->ui->online->setText(QString("在线人数:%1").arg(online));
}

QString UserAvater::getDate() const
{
    return date;
}

void UserAvater::setDate(const QString &value)
{
    date = value;
    ui->date->setText(QString(date));
}

void UserAvater::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.fillRect(this->rect(), QColor(255, 255, 255, 80));  //QColor最后一个参数80代表背景的透明度
    QWidget::paintEvent(event);
}

void UserAvater::on_pushButton_clicked()
{
    emit exit();
}
