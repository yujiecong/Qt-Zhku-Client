#include "ExamArrangement_Ui.h"
#include "ui_ExamArrangement_Ui.h"

#include <QNetworkReply>
#include <QNetworkRequest>

ExamArrangement_Ui::ExamArrangement_Ui(QString xnxq, QWidget *parent) :
    QWidget(parent),xnxq(xnxq),
    ui(new Ui::ExamArrangement_Ui)
{
    ui->setupUi(this);

    ui->comboBox->clear();
    QString year=xnxq.mid(0,4);
    QString  semester=xnxq.mid(4);
    ui->comboBox->addItem(tr("%1~%2学年第一学期").arg(year).arg(year.toInt()+1));
    if(semester.toInt()==1){

        ui->comboBox->addItem(tr("%1~%2学年第二学期").arg(year).arg(year.toInt()+1));
    }
    xnxq=year+"0";
#if defined(Q_OS_ANDROID)
    QScroller::grabGesture(ui->scrollArea,QScroller::TouchGesture);

#else

#endif
}

ExamArrangement_Ui::~ExamArrangement_Ui()
{
    delete ui;
}

int ExamArrangement_Ui::getlcxz()
{

    return ui->comboBox_2->currentIndex();
}

QString ExamArrangement_Ui::getlc()
{
    return turnCode[ui->comboBox_3->currentIndex()];
}

void ExamArrangement_Ui::setCombo(QStringList l)
{
   ui->comboBox_3->clear();
   ui->comboBox_3->addItem(QString(""));
   ui->comboBox_3->addItems(l);

}

void ExamArrangement_Ui::insertImg(ImgLabel *img)
{
    ui->verticalLayout_2->addWidget(img);
}

void ExamArrangement_Ui::on_queryBtn_clicked()
{
    emit queryExam();
}



void ExamArrangement_Ui::on_comboBox_2_currentIndexChanged(int index)
{
    emit currentIndexChanged(index);
}

QStringList ExamArrangement_Ui::getTurnCode() const
{
    return turnCode;
}

void ExamArrangement_Ui::setTurnCode(const QStringList &value)
{
    turnCode = value;
}

void ExamArrangement_Ui::on_comboBox_currentIndexChanged(int index)
{
    xnxq=xnxq.mid(0,4)+QString::number(index);
}

QString ExamArrangement_Ui::getXnxq() const
{
    return xnxq;
}

void ExamArrangement_Ui::setXnxq(const QString &value)
{
    xnxq = value;
}
