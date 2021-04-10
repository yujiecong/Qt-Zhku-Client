#include "ScoreDistubing_ui.h"
#include "ui_ScoreDistubing_ui.h"

ScoreDistubing_Ui::ScoreDistubing_Ui(QString xnxq,QWidget *parent) :
    QWidget(parent),xnxq(xnxq),
    ui(new Ui::ScoreDistubing_Ui)
{
    ui->setupUi(this);
    for(int i=xnxq.toInt()/10;i>xnxq.toInt()/10-5;i--){

         ui->comboBox->addItem(QString("%1").arg(i));
    }
#if defined(Q_OS_ANDROID)
    QScroller::grabGesture(ui->scrollArea,QScroller::TouchGesture);

#else

#endif
}

ScoreDistubing_Ui::~ScoreDistubing_Ui()
{
    delete ui;
}

void ScoreDistubing_Ui::setHtml(QString &html) const
{
    ui->textBrowser->setHtml(html);
}

QString ScoreDistubing_Ui::getXN() const
{
    return ui->comboBox->currentText();
}

int ScoreDistubing_Ui::getXQ() const
{
    return ui->comboBox_3->currentIndex();
}

QString ScoreDistubing_Ui::getXnxq() const
{
    return xnxq;
}

void ScoreDistubing_Ui::setXnxq(const QString &value)
{
    xnxq = value;
}

void ScoreDistubing_Ui::on_queryDisBtn_clicked()
{
    emit queryDis();
}

void ScoreDistubing_Ui::on_fromFreshToNow_clicked()
{
    byWhat=0;
}

void ScoreDistubing_Ui::on_byYear_clicked()
{
    byWhat=1;
}

void ScoreDistubing_Ui::on_bySemester_clicked()
{
    byWhat=2;
}
