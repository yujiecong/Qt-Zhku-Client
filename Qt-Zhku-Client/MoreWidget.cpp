#include "MoreWidget.h"
#include "ui_MoreWidget.h"

MoreWidget::MoreWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MoreWidget)
{
    ui->setupUi(this);
}

MoreWidget::~MoreWidget()
{
    delete ui;
}
