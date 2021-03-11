#include "submenuwidget.h"
#include "ui_submenuwidget.h"
#include "QDebug"
SubMenuWidget::SubMenuWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SubMenuWidget)
{
    ui->setupUi(this);

    hide();
}

SubMenuWidget::~SubMenuWidget()
{
    delete ui;
}

void SubMenuWidget::changeSubBg(int pos)
{
    if(pos!=curPos ){
        if (curPos!=-1){
            v[curPos]->isClicked=0;
            v[curPos]->repaint();
        }

        v[pos]->isClicked=1;
        v[pos]->repaint();
        curPos=pos;
    }
    else{
        v[pos]->isClicked=v[pos]->isClicked==1?0:1;
        v[pos]->repaint();
    }


}
