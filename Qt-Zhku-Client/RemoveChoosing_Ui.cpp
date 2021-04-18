#include "RemoveChoosing_Ui.h"
#include "ui_RemoveChoosing_Ui.h"

RemoveChoosing_Ui::RemoveChoosing_Ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RemoveChoosing_Ui)
{
    ui->setupUi(this);
}

RemoveChoosing_Ui::~RemoveChoosing_Ui()
{
    delete ui;
}
