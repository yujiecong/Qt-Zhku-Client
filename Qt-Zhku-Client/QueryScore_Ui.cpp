#include "QueryScore_Ui.h"
#include "ui_QueryScore_Ui.h"
#include "QDebug"

#include <QScroller>
#include <QScroller>
QueryScore_Ui::QueryScore_Ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QueryScore_Ui)
{
    ui->setupUi(this);

    for(int i=CUR_XNXQ.toInt()/10;i>CUR_XNXQ.toInt()/10-5;i--){

         ui->comboBox->addItem(QString("%1").arg(i));
    }
    connect(ui->rawScore,&QRadioButton::clicked,[=](){
        if(ui->rawScore->isChecked()){
            scoreType=0;
        }
        else{
            scoreType=1;
        }
    });

#if defined(Q_OS_ANDROID)
    QScroller::grabGesture(ui->scrollArea,QScroller::TouchGesture);

#else

#endif
}

QueryScore_Ui::~QueryScore_Ui()
{
    delete ui;
}

void QueryScore_Ui::insertImg(ImgLabel *l)
{
    ui->verticalLayout_3->insertWidget(0,l);
}

QString QueryScore_Ui::getXN()
{
    return ui->comboBox->currentText();
}

int QueryScore_Ui::getXQIndex()
{
    return ui->comboBox_3->currentIndex();
}


void QueryScore_Ui::on_fromFreshToNow_clicked()
{
    byWhat=0;
}

void QueryScore_Ui::on_byYear_clicked()
{
    byWhat=1;
    ui->comboBox_3->setEnabled(0);
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

void QueryScore_Ui::on_queryScoreBtn_clicked()
{
    emit queryScore();
}
