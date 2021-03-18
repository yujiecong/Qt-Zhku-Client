#include "ExamArrangement_Ui.h"
#include "ui_ExamArrangement_Ui.h"

ExamArrangement_Ui::ExamArrangement_Ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ExamArrangement_Ui)
{
    ui->setupUi(this);
}

ExamArrangement_Ui::~ExamArrangement_Ui()
{
    delete ui;
}
