#include "Default_Ui.h"
#include "ui_Default_Ui.h"

Default_Ui::Default_Ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Default_Ui)
{
    ui->setupUi(this);
}

Default_Ui::~Default_Ui()
{
    delete ui;
}
