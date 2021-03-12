#include "functable.h"
#include "ui_functable.h"

FuncTable::FuncTable(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FuncTable)
{
    ui->setupUi(this);
}

FuncTable::~FuncTable()
{
    delete ui;
}
