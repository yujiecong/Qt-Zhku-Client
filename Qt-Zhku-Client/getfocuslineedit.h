#ifndef GETFOCUSLINEEDIT_H
#define GETFOCUSLINEEDIT_H

#include <QLabel>
#include <QWidget>
#include <qlineedit.h>

class GetFocusLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    GetFocusLineEdit(QWidget *parent = Q_NULLPTR);
    ~GetFocusLineEdit();

    void setPixmap(QPixmap &pc);
protected:
    virtual void focusInEvent(QFocusEvent *e);
    virtual void focusOutEvent(QFocusEvent *e);
private:
    QLabel *l=new QLabel(this);
};

#endif // GETFOCUSLINEEDIT_H
