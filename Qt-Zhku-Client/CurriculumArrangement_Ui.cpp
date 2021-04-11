#include "CurriculumArrangement_ui.h"
#include "ui_curriculumarrangement_ui.h"
#include "global.h"
CurriculumArrangement_Ui::CurriculumArrangement_Ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CurriculumArrangement_Ui)
{
    ui->setupUi(this);

    //学年学期 初始化
    //十年内
    for(int i=CUR_XNXQ.toInt()/10;i>CUR_XNXQ.toInt()/10-5;i-=1){
        for(int j=1;j>=0;j--){
            ui->comboBox->addItem(QString("%1~%2学年第%3学期").arg(i).arg(i+1).arg(j==0?"一":"二"));
            xnxqList<<QString("%1%2").arg(i).arg(j);
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
            zc_flag=1;
            ui->lineEdit->setEnabled(1);

        }
        else{
            zc_flag=0;
            ui->lineEdit->setEnabled(0);
            ui->lineEdit->setText("1-18");
        }
    });
    //

#if defined(Q_OS_ANDROID)
    QScroller::grabGesture(ui->scrollArea,QScroller::TouchGesture);

#else

#endif

    connect(ui->queryCurriculumBtn,&QPushButton::clicked,this,&CurriculumArrangement_Ui::queryCurri);


}

CurriculumArrangement_Ui::~CurriculumArrangement_Ui()
{
    delete ui;
}

void CurriculumArrangement_Ui::insertImg(ImgLabel *l)
{
    ui->imgVerticalLayout->insertWidget(0,l);
}

QString CurriculumArrangement_Ui::getXNXQ()
{
    return xnxqList.at(ui->comboBox->currentIndex());
}

int CurriculumArrangement_Ui::getCurIndex()
{
    return ui->comboBox_2->currentIndex();
}

QString CurriculumArrangement_Ui::getZC()
{
    return ui->lineEdit->text();
}
