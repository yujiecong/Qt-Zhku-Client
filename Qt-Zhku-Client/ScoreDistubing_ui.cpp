#include "ScoreDistubing_ui.h"
#include "ui_ScoreDistubing_ui.h"

ScoreDistubing_Ui::ScoreDistubing_Ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ScoreDistubing_Ui)
{
    ui->setupUi(this);
}

ScoreDistubing_Ui::~ScoreDistubing_Ui()
{
    delete ui;
}
