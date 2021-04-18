/********************************************************************************
** Form generated from reading UI file 'ChoosingResult_Ui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSINGRESULT_UI_H
#define UI_CHOOSINGRESULT_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChoosingResult_Ui
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWidget *ChoosingResult_Ui)
    {
        if (ChoosingResult_Ui->objectName().isEmpty())
            ChoosingResult_Ui->setObjectName(QString::fromUtf8("ChoosingResult_Ui"));
        ChoosingResult_Ui->resize(804, 544);
        verticalLayout = new QVBoxLayout(ChoosingResult_Ui);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(ChoosingResult_Ui);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        scrollArea = new QScrollArea(ChoosingResult_Ui);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 784, 258));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(ChoosingResult_Ui);

        QMetaObject::connectSlotsByName(ChoosingResult_Ui);
    } // setupUi

    void retranslateUi(QWidget *ChoosingResult_Ui)
    {
        ChoosingResult_Ui->setWindowTitle(QCoreApplication::translate("ChoosingResult_Ui", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChoosingResult_Ui: public Ui_ChoosingResult_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSINGRESULT_UI_H
