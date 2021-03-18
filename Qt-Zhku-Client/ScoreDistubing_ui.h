#ifndef SCOREDISTUBING_UI_H
#define SCOREDISTUBING_UI_H

#include <QWidget>

namespace Ui {
class ScoreDistubing_Ui;
}

class ScoreDistubing_Ui : public QWidget
{
    Q_OBJECT

public:
    explicit ScoreDistubing_Ui(QString xnxq,QWidget *parent = 0);
    ~ScoreDistubing_Ui();
    void setHtml(QString &html) const;

    QString  getXN() const;
    int getXQ() const;

    QString getXnxq() const;
    void setXnxq(const QString &value);
    Ui::ScoreDistubing_Ui *ui;
    QString xnxq;
    int byWhat=2;

signals:
    void queryDis();

private slots:
    void on_queryDisBtn_clicked();

    void on_fromFreshToNow_clicked();

    void on_byYear_clicked();

    void on_bySemester_clicked();

private:


};

#endif // SCOREDISTUBING_UI_H
