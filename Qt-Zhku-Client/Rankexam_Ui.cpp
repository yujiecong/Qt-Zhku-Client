#include "Rankexam_Ui.h"
#include "ui_RankExam_Ui.h"

RankExam_Ui::RankExam_Ui(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RankExam_Ui)
{
    ui->setupUi(this);
#if defined(Q_OS_ANDROID)
    QScroller::grabGesture(ui->scrollArea,QScroller::TouchGesture);

#else

#endif
}

RankExam_Ui::~RankExam_Ui()
{
    delete ui;
}

void RankExam_Ui::setHtml(QString html) const
{
    ui->textBrowser->setHtml(html);
}
