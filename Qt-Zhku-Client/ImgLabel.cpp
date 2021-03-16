#include "ImgLabel.h"
#include "QDebug"
#include <QFileDialog>
#include <QMessageBox>
#include <QMouseEvent>
ImgLabel::ImgLabel(QWidget *parent):QLabel(parent)
{
     menu=new QMenu();
     QPixmap px;
     setPixmap(px);
     QAction *saveAct=new QAction("保存图片",this);
     menu->addAction(saveAct);
     connect(saveAct,&QAction::triggered,[=](){
         QString fileName=QFileDialog::getSaveFileName(this,tr("Save File"),".","jpg image(*.jpg)");
            saveImg(fileName);
     });
     setAlignment(Qt::AlignCenter);
}

ImgLabel::~ImgLabel()
{
    deleteLater();
}

void ImgLabel::mousePressEvent(QMouseEvent *ev)
{

    if(ev->button()==Qt::RightButton){
        menu->exec(QCursor::pos());
    }
}

void ImgLabel::saveImg(QString path)
{
     pixmap()->save(path,"jpg");
     qDebug()<<"saved";
}
