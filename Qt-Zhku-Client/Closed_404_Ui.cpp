#include "Closed_404_Ui.h"
#include "ui_Closed_404_Ui.h"

Closed_404_Ui::Closed_404_Ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Closed_404_Ui)
{
    ui->setupUi(this);
}

Closed_404_Ui::~Closed_404_Ui()
{
    delete ui;
}
