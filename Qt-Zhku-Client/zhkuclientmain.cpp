#include "zhkuclientmain.h"
#include "ui_zhkuclientmain.h"

ZhkuClientMain::ZhkuClientMain(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ZhkuClientMain)
{
    ui->setupUi(this);
}

ZhkuClientMain::~ZhkuClientMain()
{
    delete ui;
}
