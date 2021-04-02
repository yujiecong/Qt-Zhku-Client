#include "MoreWidget.h"
#include "ui_MoreWidget.h"

#include <QMessageBox>
#include <QNetWorkRequest>
#include "global.h"
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

    ui->widget_4->hide();
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

    //显示页面
//    刷新cookies
    QNetworkReply *temp=getReqReply("http://jw.zhku.edu.cn/ZNPK/KBFB_LessonSel.aspx");
    connect(temp,&QNetworkReply::finished,[=](){
       //访问验证码
        slotsGetCodeImg();
       //访问课程
        //更新cookies
       getReqReply("http://jw.zhku.edu.cn/ZNPK/KBFB_LessonSel_rpt.aspx");
       QNetworkReply *curriculumList=getReqReply(tr("http://jw.zhku.edu.cn/ZNPK/Private/List_XNXQKC.aspx?xnxq=%1").arg(getXnxq()));
       connect(curriculumList,&QNetworkReply::finished,[=](){
           QString html=strProcessor.gbk2Utf8(curriculumList->readAll());
           //写一个正则匹配出来
           QRegExp ex("\\d{6}\\|[\u4e00-\u9fa5]{1,20}");
           QStringList list=reFindAll(ex,html);
           curriList=list;

           ui->comboBox_2->clear();
           foreach (QString item, list) {
               ui->comboBox_2->addItem(item);
           }
           curriculumList->deleteLater();
       });

       temp->deleteLater();

    });
    slotsShowPage(CURRICULUM_ARRANGEMENT);


}

void MoreWidget::slotsShowPage(int page)
{
    ui->widget_4->show();
    ui->tabWidget->setCurrentIndex(page);
}
QString MoreWidget::getXnxq() const
{
        return xnxqList.at(ui->comboBox->currentIndex());
}

void MoreWidget::on_pushButton_2_clicked()
{
    slotsShowPage(TEACHER_CURRICULUM_TABLE);
}

void MoreWidget::slotsGetCurriculum_Arrangement()
{
    // 更新cookies
    //    QNetWorkRequest
}

void MoreWidget::slotsGetCodeImg()
{
    QNetworkRequest req(QUrl("http://jw.zhku.edu.cn/sys/ValidateCode.aspx"));
    req.setRawHeader("Content-Type", "application/x-www-form-urlencoded");
    req.setRawHeader("User-Agent","Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.190 Safari/537.36");
    req.setRawHeader("Referer","http://jw.zhku.edu.cn/ZNPK/KBFB_LessonSel.aspx");
    QNetworkReply *codeReply=manager.get(req);
    connect(codeReply,&QNetworkReply::finished,[=](){
        QByteArray codeRaw=codeReply->readAll();
        QPixmap pixmap;
        pixmap.loadFromData(codeRaw);
        setImg(pixmap);
        codeReply->deleteLater();
    });
}

void MoreWidget::on_lineEdit_textChanged(const QString &arg1)
{
    //搜索框
    //如果找到有包含的,显示
    if(ui->comboBox_2->currentText().isEmpty()){
        foreach (QString item, curriList) {
            ui->comboBox_2->addItem(item);
        }
    }
    else{
        ui->comboBox_2->clear();
        foreach (QString curri,curriList) {
            if(curri.contains(arg1)){
                ui->comboBox_2->addItem(curri);
            }
        }
    }

}

void MoreWidget::on_pushButton_11_clicked()
{
    if(ui->lineEdit_2->text().isEmpty()){
        QMessageBox::warning(this,"警告","请填写验证码");
        return;
    }
    int type=ui->radioButton->isChecked();
    QString code=ui->comboBox_2->currentText().mid(0,6);//课程代码
    QString validation=ui->lineEdit_2->text();
    QByteArray data;

    data.append(tr("Sel_XNXQ=%1&Sel_KC=%2&gs=%3&txt_yzm=%4").arg(getXnxq()).arg(code).arg(type).arg(validation));


    QUrl u("http://jw.zhku.edu.cn/ZNPK/KBFB_LessonSel_rpt.aspx");
    QNetworkRequest req(u);
    req.setRawHeader("Content-Type", "application/x-www-form-urlencoded");
    req.setRawHeader("User-Agent","Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.190 Safari/537.36");
    req.setRawHeader("Referer","http://jw.zhku.edu.cn/ZNPK/KBFB_LessonSel.aspx");

    QNetworkReply * table=manager.post(req,data);

    connect(table,&QNetworkReply::finished,[=](){
        QString html=strProcessor.gbk2Utf8(table->readAll());
        if(html.contains("验证码错误")){
            QMessageBox::about(this,"警告","验证码错误");
              slotsGetCodeImg();
        }
        ui->textBrowser->setHtml(html);
        table->deleteLater();

    });

//    http://jw.zhku.edu.cn/ZNPK/Private/List_XNXQKC.aspx?xnxq=20201&kc=
}
