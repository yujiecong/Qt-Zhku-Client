#include "ChoosingResult_Ui.h"
#include "ui_ChoosingResult_Ui.h"

ChoosingResult_Ui::ChoosingResult_Ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ChoosingResult_Ui)
{
    ui->setupUi(this);
}

ChoosingResult_Ui::~ChoosingResult_Ui()
{
    delete ui;
}
