/********************************************************************************
** Form generated from reading UI file 'RankExam_Ui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RANKEXAM_UI_H
#define UI_RANKEXAM_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RankExam_Ui
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *RankExam_Ui)
    {
        if (RankExam_Ui->objectName().isEmpty())
            RankExam_Ui->setObjectName(QStringLiteral("RankExam_Ui"));
        RankExam_Ui->resize(667, 425);
        verticalLayout = new QVBoxLayout(RankExam_Ui);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textBrowser = new QTextBrowser(RankExam_Ui);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout->addWidget(textBrowser);


        retranslateUi(RankExam_Ui);

        QMetaObject::connectSlotsByName(RankExam_Ui);
    } // setupUi

    void retranslateUi(QWidget *RankExam_Ui)
    {
        RankExam_Ui->setWindowTitle(QApplication::translate("RankExam_Ui", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class RankExam_Ui: public Ui_RankExam_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RANKEXAM_UI_H
