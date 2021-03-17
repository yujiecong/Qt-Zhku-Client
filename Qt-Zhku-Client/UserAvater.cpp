#include "UserAvater.h"
#include "ui_UserAvater.h"

UserAvater::UserAvater(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserAvater)
{
    ui->setupUi(this);
}

UserAvater::~UserAvater()
{
    delete ui;
}
