#ifndef EXAMARRANGEMENT_UI_H
#define EXAMARRANGEMENT_UI_H

#include "ImgLabel.h"

#include <QWidget>
#include "global.h"
namespace Ui {
class ExamArrangement_Ui;
}

class ExamArrangement_Ui : public QWidget
{
    Q_OBJECT

public:
    explicit ExamArrangement_Ui( QWidget *parent = 0);
    ~ExamArrangement_Ui();

     int getlcxz();
     QString getlc();

    QStringList getTurnCode() const;
    void setTurnCode(const QStringList &value);
    void setXNXQ(QString xnxq);
    QString getXnxq() const;
    void setXnxq(const QString &value);

signals:
    void queryExam();
    void currentIndexChanged(const int index);
public slots:
    void setCombo(QStringList l);
    void insertImg(ImgLabel *img);
private slots:
    void on_queryBtn_clicked();
    void on_comboBox_2_currentIndexChanged(int index);

    void on_comboBox_currentIndexChanged(int index);

private:
    //考试轮次 代码
    QStringList turnCode;
    Ui::ExamArrangement_Ui *ui;
    QString xnxq;
};

#endif // EXAMARRANGEMENT_UI_H
