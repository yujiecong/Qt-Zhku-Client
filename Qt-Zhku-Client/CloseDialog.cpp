#include "CloseDialog.h"
#include "ui_CloseDialog.h"

#include <QPainter>

CloseDialog::CloseDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CloseDialog)
{
    ui->setupUi(this);
    setWindowFlag(Qt::FramelessWindowHint);
}

CloseDialog::~CloseDialog()
{
    delete ui;
}

void CloseDialog::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);
    painter.setBrush(QColor(255,255,255));
    painter.setPen(Qt::transparent);
    QRect rect = this->rect();
    rect.setWidth(rect.width() - 1);
    rect.setHeight(rect.height() - 1);
    painter.drawRoundedRect(rect, 35, 35);
    QDialog::paintEvent(e);
}
