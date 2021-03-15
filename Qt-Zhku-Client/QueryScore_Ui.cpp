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
    connect(ui->rawScore,&QRadioButton::clicked,[=](){
        if(ui->rawScore->isChecked()){
            scoreType=0;
        }
        else{
            scoreType=1;
        }
    });





}

QueryScore_Ui::~QueryScore_Ui()
{
    delete ui;
}

void QueryScore_Ui::on_fromFreshToNow_clicked()
{
    byWhat=0;
}

void QueryScore_Ui::on_byYear_clicked()
{
    byWhat=1;
}

void QueryScore_Ui::on_bySemester_clicked()
{
    byWhat=2;
}

void QueryScore_Ui::on_mainlyLearn_clicked()
{
    learnType=0;
}

void QueryScore_Ui::on_otherlyLearn_clicked()
{
    learnType=1;
}
