#include "Rankexam_Ui.h"
#include "ui_RankExam_Ui.h"

RankExam_Ui::RankExam_Ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RankExam_Ui)
{
    ui->setupUi(this);
}

RankExam_Ui::~RankExam_Ui()
{
    delete ui;
}

void RankExam_Ui::setHtml(QString html) const
{
    ui->textBrowser->setHtml(html);
}
