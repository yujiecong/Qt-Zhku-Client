/********************************************************************************
** Form generated from reading UI file 'Closed_404_Ui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOSED_404_UI_H
#define UI_CLOSED_404_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Closed_404_Ui
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QWidget *Closed_404_Ui)
    {
        if (Closed_404_Ui->objectName().isEmpty())
            Closed_404_Ui->setObjectName(QString::fromUtf8("Closed_404_Ui"));
        Closed_404_Ui->resize(646, 527);
        verticalLayout = new QVBoxLayout(Closed_404_Ui);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Closed_404_Ui);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial"));
        font.setPointSize(24);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        retranslateUi(Closed_404_Ui);

        QMetaObject::connectSlotsByName(Closed_404_Ui);
    } // setupUi

    void retranslateUi(QWidget *Closed_404_Ui)
    {
        Closed_404_Ui->setWindowTitle(QCoreApplication::translate("Closed_404_Ui", "Form", nullptr));
        label->setText(QCoreApplication::translate("Closed_404_Ui", "\345\274\200\345\217\221\350\200\205\346\230\257\344\270\252\346\207\222\351\254\274,\350\277\230\346\262\241\345\206\231\345\210\260\350\277\231\351\207\214\345\221\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Closed_404_Ui: public Ui_Closed_404_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOSED_404_UI_H
