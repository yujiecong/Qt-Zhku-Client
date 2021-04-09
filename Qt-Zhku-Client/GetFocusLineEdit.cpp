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

//    qDebug()<<this->x()+this->width()/2<<this->y();
    #if defined(Q_OS_ANDROID)
        l->setFixedSize(picWidth*2,picHeight*3);
        l->move(this->width()/2+picWidth/2,this->height()/2-45);
    #else
    l->setFixedSize(picWidth,picHeight);
    l->move(this->width()/2,0);

    #endif

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
