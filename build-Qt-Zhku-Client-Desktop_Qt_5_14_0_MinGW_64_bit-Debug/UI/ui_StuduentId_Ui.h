/********************************************************************************
** Form generated from reading UI file 'StuduentId_Ui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STUDUENTID_UI_H
#define UI_STUDUENTID_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StuduentId_Ui
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *StuduentId_Ui)
    {
        if (StuduentId_Ui->objectName().isEmpty())
            StuduentId_Ui->setObjectName(QString::fromUtf8("StuduentId_Ui"));
        StuduentId_Ui->resize(739, 432);
        verticalLayout = new QVBoxLayout(StuduentId_Ui);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(StuduentId_Ui);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);


        retranslateUi(StuduentId_Ui);

        QMetaObject::connectSlotsByName(StuduentId_Ui);
    } // setupUi

    void retranslateUi(QWidget *StuduentId_Ui)
    {
        StuduentId_Ui->setWindowTitle(QCoreApplication::translate("StuduentId_Ui", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StuduentId_Ui: public Ui_StuduentId_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STUDUENTID_UI_H
