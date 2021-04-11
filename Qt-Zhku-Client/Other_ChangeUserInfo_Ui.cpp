#include "Other_ChangeUserInfo_Ui.h"
#include "ui_Other_ChangeUserInfo_Ui.h"

Other_ChangeUserInfo_Ui::Other_ChangeUserInfo_Ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Other_ChangeUserInfo_Ui)
{
    ui->setupUi(this);
}

Other_ChangeUserInfo_Ui::~Other_ChangeUserInfo_Ui()
{
    delete ui;
}
