#include "ChoosingResult_Ui.h"
#include "ui_ChoosingResult_Ui.h"

ChoosingResult_Ui::ChoosingResult_Ui(QWidget *parent) :
    WidgetWithHtml(parent),
    ui(new Ui::ChoosingResult_Ui)
{
    ui->setupUi(this);
}

ChoosingResult_Ui::~ChoosingResult_Ui()
{
    delete ui;
}

void ChoosingResult_Ui::setHtml(QString html)
{

        ui->textBrowser->setHtml(html);

}

void ChoosingResult_Ui::insertImg(ImgLabel *img)
{
    ui->verticalLayout_2->addWidget(img);
}
