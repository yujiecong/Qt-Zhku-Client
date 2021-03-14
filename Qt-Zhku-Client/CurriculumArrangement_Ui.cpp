#include "curriculumarrangement_ui.h"
#include "ui_curriculumarrangement_ui.h"

CurriculumArrangement_Ui::CurriculumArrangement_Ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CurriculumArrangement_Ui)
{
    ui->setupUi(this);
}

CurriculumArrangement_Ui::~CurriculumArrangement_Ui()
{
    delete ui;
}
