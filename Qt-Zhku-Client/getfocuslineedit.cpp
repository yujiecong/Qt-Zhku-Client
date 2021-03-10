#include "getfocuslineedit.h"
#include "QDebug"
GetFocusLineEdit::GetFocusLineEdit(QWidget *parent):QLineEdit(parent)
{

}

GetFocusLineEdit::~GetFocusLineEdit()
{
    l->deleteLater();
}

void GetFocusLineEdit::setPixmap(QPixmap &pc)
{

    l->setPixmap(pc);
    qDebug()<<this->x()+this->width()/2<<this->y();
//    l->move(this->x()+this->width()/2,this->y());


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
