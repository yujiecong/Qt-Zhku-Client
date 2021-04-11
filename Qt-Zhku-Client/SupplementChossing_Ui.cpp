#include "SupplementChossing_Ui.h"
#include "ui_SupplementChossing_Ui.h"

SupplementChossing_Ui::SupplementChossing_Ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SupplementChossing_Ui)
{
    ui->setupUi(this);
}

SupplementChossing_Ui::~SupplementChossing_Ui()
{
    delete ui;
}
