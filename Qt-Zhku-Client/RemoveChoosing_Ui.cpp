#include "RemoveChoosing_Ui.h"
#include "ui_RemoveChoosing_Ui.h"

RemoveChoosing_Ui::RemoveChoosing_Ui(QWidget *parent) :
    WidgetWithHtml(parent),
    ui(new Ui::RemoveChoosing_Ui)
{
    ui->setupUi(this);
}

RemoveChoosing_Ui::~RemoveChoosing_Ui()
{
    delete ui;
}

void RemoveChoosing_Ui::setHtml( QString html)
{
    ui->textBrowser->setHtml(html);
}

void RemoveChoosing_Ui::insertImg(ImgLabel *l)
{
    ui->imgVerticalLayout->insertWidget(0,l);
}
