#ifndef MOREWIDGET_H
#define MOREWIDGET_H

#include <QWidget>

namespace Ui {
class MoreWidget;
}

class MoreWidget : public QWidget
{
    Q_OBJECT

public:
    enum{
        CURRICULUM_ARRANGEMENT,
        TEACHER_CURRICULUM_TABLE,
        CLASS_CURRICULUM_TABLE,
        CLASSROOM_CURRICULUM_TABLE,
        OPTION_CURRICULUM_TABLE,
        WEEK_DAY_ONE_CURRICULUM_TABLE,
        CURRICULUM_PROGRESS_TABLE,
        CLASS_CURRICULUM_PROGRESS_TABLE,
        ARR1,
        ARR2,

    };

    explicit MoreWidget(QString xnxq, QWidget *parent = 0);
    ~MoreWidget();

    void setImg(QPixmap &px);
    QString getXnxq() const;

signals:
    void signalsGetCodeImg();
private slots:
    void on_pushButton_clicked();
    void slotsShowPage(int);
    void on_pushButton_2_clicked();
    void slotsGetCurriculum_Arrangement();
    void slotsGetCodeImg();

    void on_lineEdit_textChanged(const QString &arg1);

    void on_pushButton_11_clicked();

    void on_pushButton_21_clicked();

private:
    Ui::MoreWidget *ui;
    QString xnxq;
    QStringList xnxqList;
    QStringList curriList;
};

#endif // MOREWIDGET_H
