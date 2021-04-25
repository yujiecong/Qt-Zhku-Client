#ifndef USERAVATER_H
#define USERAVATER_H

#include <QWidget>

namespace Ui {
class UserAvater;
}

class UserAvater : public QWidget
{
    Q_OBJECT

public:
    explicit UserAvater(QWidget *parent = 0);
    ~UserAvater();

    QString getCurWeek() const;
    void setCurWeek(const QString &value);

    QString getName() const;
    void setName(const QString &value);

    int getOnline() const;
    void setOnline(int value);

    QString getDate() const;
    void setDate(const QString &value);

signals:
    void exit();
protected:
    void paintEvent(QPaintEvent *event);
private slots:
    void on_pushButton_clicked();

private:
    Ui::UserAvater *ui;

    QString curWeek;
    QString name;
    QString date;
    int online;
};

#endif // USERAVATER_H
