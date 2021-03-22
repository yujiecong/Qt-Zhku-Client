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
    explicit MoreWidget(QString xnxq, QWidget *parent = 0);
    ~MoreWidget();

    void setImg(QPixmap &px);
    QString getXnxq() const;

signals:
    void getCodeImg();
private slots:
    void on_pushButton_clicked();
private:
    Ui::MoreWidget *ui;
    QString xnxq;
    QStringList xnxqList;

};

#endif // MOREWIDGET_H
