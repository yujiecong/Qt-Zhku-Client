#include "CurriculumArrangement_ui.h"
#include "ui_curriculumarrangement_ui.h"

CurriculumArrangement_Ui::CurriculumArrangement_Ui(QString xnxq,QWidget *parent) :
    QWidget(parent),xnxq(xnxq),
    ui(new Ui::CurriculumArrangement_Ui)
{
    ui->setupUi(this);

    //学年学期 初始化
    //十年内
    for(int i=xnxq.toInt()/10;i>xnxq.toInt()/10-5;i-=1){
        for (int j=0;j<2;j++){
            ui->comboBox->addItem(QString::number(i)+QString::number(j));
        }

    }
    //格式一二
    ui->type1Widget->hide();
    connect(ui->radioButton_2,&QRadioButton::clicked,[=](){
        ui->type1Widget->show();
        rad=1;

    });
    connect(ui->radioButton,&QRadioButton::clicked,[=](){
        ui->type1Widget->hide();

        rad=0;
    });
    connect(ui->checkBox,&QCheckBox::clicked,[=](){
        if(ui->checkBox->isChecked()){
            zc_flag=0;
            ui->lineEdit->setEnabled(0);

        }
        else{
            zc_flag=1;
            ui->checkBox->setChecked(1);
            ui->lineEdit->setText("1-18");
        }
    });
    //

    connect(ui->checkBox,&QCheckBox::clicked,[=](){
        if(ui->lineEdit->isEnabled()){
            ui->lineEdit->setEnabled(0);
        }
        else{
            ui->lineEdit->setEnabled(1);

        }

    });



}

CurriculumArrangement_Ui::~CurriculumArrangement_Ui()
{
    delete ui;
}
