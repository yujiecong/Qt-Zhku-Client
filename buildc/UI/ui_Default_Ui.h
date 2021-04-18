/********************************************************************************
** Form generated from reading UI file 'Default_Ui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFAULT_UI_H
#define UI_DEFAULT_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Default_Ui
{
public:
    QHBoxLayout *horizontalLayout;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *Default_Ui)
    {
        if (Default_Ui->objectName().isEmpty())
            Default_Ui->setObjectName(QString::fromUtf8("Default_Ui"));
        Default_Ui->resize(688, 449);
        horizontalLayout = new QHBoxLayout(Default_Ui);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textBrowser = new QTextBrowser(Default_Ui);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        horizontalLayout->addWidget(textBrowser);


        retranslateUi(Default_Ui);

        QMetaObject::connectSlotsByName(Default_Ui);
    } // setupUi

    void retranslateUi(QWidget *Default_Ui)
    {
        Default_Ui->setWindowTitle(QCoreApplication::translate("Default_Ui", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Default_Ui: public Ui_Default_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFAULT_UI_H
