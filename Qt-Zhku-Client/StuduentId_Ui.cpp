#include "StuduentId_Ui.h"
#include "ui_StuduentId_Ui.h"

StuduentId_Ui::StuduentId_Ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::StuduentId_Ui)
{
    ui->setupUi(this);
}

StuduentId_Ui::~StuduentId_Ui()
{
    delete ui;
}
