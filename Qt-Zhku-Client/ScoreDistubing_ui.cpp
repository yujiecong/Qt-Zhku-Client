#include "ScoreDistubing_ui.h"
#include "ui_ScoreDistubing_ui.h"

#include <QScroller>

ScoreDistubing_Ui::ScoreDistubing_Ui(QWidget *parent) :
    WidgetWithHtml(parent),
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

void ScoreDistubing_Ui::setHtml(QString html)
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
