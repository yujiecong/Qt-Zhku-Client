#include "MoreWidget.h"
#include "ui_MoreWidget.h"

MoreWidget::MoreWidget(QString xnxq, QWidget *parent) :
    QWidget(parent),xnxq(xnxq),
    ui(new Ui::MoreWidget)
{
    ui->setupUi(this);

    QString year=xnxq.mid(0,4);
    QString  semester=xnxq.mid(4);
    for(int i=xnxq.toInt()/10;i>xnxq.toInt()/10-10;i-=1){
        for(int j=1;j>=0;j--){
            ui->comboBox->addItem(QString("%1~%2学年第%3学期").arg(i).arg(i+1).arg(j==0?"一":"二"));
            xnxqList<<QString("%1%2").arg(i).arg(j);
        }

    }

}

MoreWidget::~MoreWidget()
{
    delete ui;
}

void MoreWidget::setImg(QPixmap &px)
{
    ui->label_6->setPixmap(px);
}

void MoreWidget::on_pushButton_clicked()
{
    emit getCodeImg();
}
QString MoreWidget::getXnxq() const
{
        return xnxqList.at(ui->comboBox->currentIndex());
}
