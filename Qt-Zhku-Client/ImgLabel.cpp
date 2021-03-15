#include "ImgLabel.h"

#include <QMessageBox>
#include <QMouseEvent>
ImgLabel::ImgLabel(QWidget *parent):QLabel(parent)
{
     menu=new QMenu();
     QAction *saveAct=new QAction("保存图片");
     menu->addAction(saveAct);
     connect(saveAct,&QAction::triggered,[=](){

     });
}

ImgLabel::~ImgLabel()
{
    deleteLater();
}

void ImgLabel::mousePressEvent(QMouseEvent *ev)
{

    if(ev->button()==Qt::RightButton){
        menu->show();
    }
}

void ImgLabel::saveImg(QString path)
{
}
