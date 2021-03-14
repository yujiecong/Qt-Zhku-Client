#include "GetFocusLineEdit.h"
#include "QDebug"
GetFocusLineEdit::GetFocusLineEdit(QWidget *parent):QLineEdit(parent)
{
    l->hide();
    l->setScaledContents(1);
}

GetFocusLineEdit::~GetFocusLineEdit()
{
    l->deleteLater();
}

void GetFocusLineEdit::setPixmap(QPixmap &pc)
{

    l->setPixmap(pc);
    pc.scaled(picWidth,picHeight,Qt::KeepAspectRatio);
    l->setFixedSize(picWidth,picHeight);
//    qDebug()<<this->x()+this->width()/2<<this->y();
    l->move(this->width()/2-10,-2);
}


void GetFocusLineEdit::focusInEvent(QFocusEvent *e)
{
    l->show();
    QLineEdit::focusInEvent(e);
}

void GetFocusLineEdit::focusOutEvent(QFocusEvent *e)
{
    l->hide();
    QLineEdit::focusOutEvent(e);
}
