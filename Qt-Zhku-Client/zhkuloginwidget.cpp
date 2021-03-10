#include "zhkuloginwidget.h"
#include "ui_zhkuloginwidget.h"

ZhkuLoginWidget::ZhkuLoginWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZhkuLoginWidget)
{
    ui->setupUi(this);
}

ZhkuLoginWidget::~ZhkuLoginWidget()
{
    delete ui;
}
