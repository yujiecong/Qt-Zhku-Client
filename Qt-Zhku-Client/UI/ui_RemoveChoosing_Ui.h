/********************************************************************************
** Form generated from reading UI file 'RemoveChoosing_Ui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVECHOOSING_UI_H
#define UI_REMOVECHOOSING_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RemoveChoosing_Ui
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *imgVerticalLayout;

    void setupUi(QWidget *RemoveChoosing_Ui)
    {
        if (RemoveChoosing_Ui->objectName().isEmpty())
            RemoveChoosing_Ui->setObjectName(QString::fromUtf8("RemoveChoosing_Ui"));
        RemoveChoosing_Ui->resize(833, 517);
        verticalLayout = new QVBoxLayout(RemoveChoosing_Ui);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(RemoveChoosing_Ui);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        scrollArea = new QScrollArea(RemoveChoosing_Ui);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 813, 244));
        imgVerticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        imgVerticalLayout->setObjectName(QString::fromUtf8("imgVerticalLayout"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(RemoveChoosing_Ui);

        QMetaObject::connectSlotsByName(RemoveChoosing_Ui);
    } // setupUi

    void retranslateUi(QWidget *RemoveChoosing_Ui)
    {
        RemoveChoosing_Ui->setWindowTitle(QCoreApplication::translate("RemoveChoosing_Ui", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveChoosing_Ui: public Ui_RemoveChoosing_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVECHOOSING_UI_H
