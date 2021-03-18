#include "ExamArrangement_Ui.h"
#include "ui_ExamArrangement_Ui.h"

#include <QNetworkReply>
#include <QNetworkRequest>

ExamArrangement_Ui::ExamArrangement_Ui(QString xnxq, QWidget *parent) :
    QWidget(parent),xnxq(xnxq),
    ui(new Ui::ExamArrangement_Ui)
{
    ui->setupUi(this);
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

}

void ExamArrangement_Ui::on_queryCurriculumBtn_clicked()
{
    emit queryExam();
}

void ExamArrangement_Ui::on_comboBox_2_currentIndexChanged(const QString &arg1)
{
    QNetworkRequest req(tr("http://jw.zhku.edu.cn/KSSW/Private/json_liskslc.aspx?lcxz=%1&xnxq=%2").arg(ui->comboBox_2->currentIndex()).arg(xnxq));
    QNetworkReply rep(req)
}
