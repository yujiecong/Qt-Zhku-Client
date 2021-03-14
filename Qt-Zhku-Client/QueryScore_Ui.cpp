#include "QueryScore_Ui.h"
#include "ui_QueryScore_Ui.h"

QueryScore_Ui::QueryScore_Ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::QueryScore_Ui)
{
    ui->setupUi(this);
}

QueryScore_Ui::~QueryScore_Ui()
{
    delete ui;
}
