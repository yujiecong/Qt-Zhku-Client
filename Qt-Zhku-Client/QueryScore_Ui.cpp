#include "QueryScore_Ui.h"
#include "ui_QueryScore_Ui.h"
#include "QDebug"
QueryScore_Ui::QueryScore_Ui(QString xnxq, QWidget *parent) :
    QWidget(parent),xnxq(xnxq),
    ui(new Ui::QueryScore_Ui)
{
    ui->setupUi(this);

    for(int i=xnxq.toInt()/10;i>xnxq.toInt()/10-5;i--){

         ui->comboBox->addItem(QString("%1-%2").arg(i).arg(i+1));
    }


}

QueryScore_Ui::~QueryScore_Ui()
{
    delete ui;
}
