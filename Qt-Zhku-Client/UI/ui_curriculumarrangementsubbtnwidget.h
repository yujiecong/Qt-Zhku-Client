/********************************************************************************
** Form generated from reading UI file 'curriculumarrangementsubbtnwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRICULUMARRANGEMENTSUBBTNWIDGET_H
#define UI_CURRICULUMARRANGEMENTSUBBTNWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CurriculumArrangementSubBtnWidget
{
public:
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *CurriculumArrangementSubBtnWidget)
    {
        if (CurriculumArrangementSubBtnWidget->objectName().isEmpty())
            CurriculumArrangementSubBtnWidget->setObjectName(QStringLiteral("CurriculumArrangementSubBtnWidget"));
        CurriculumArrangementSubBtnWidget->resize(75, 53);
        verticalLayout = new QVBoxLayout(CurriculumArrangementSubBtnWidget);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);

        retranslateUi(CurriculumArrangementSubBtnWidget);

        QMetaObject::connectSlotsByName(CurriculumArrangementSubBtnWidget);
    } // setupUi

    void retranslateUi(QWidget *CurriculumArrangementSubBtnWidget)
    {
        CurriculumArrangementSubBtnWidget->setWindowTitle(QApplication::translate("CurriculumArrangementSubBtnWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CurriculumArrangementSubBtnWidget: public Ui_CurriculumArrangementSubBtnWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRICULUMARRANGEMENTSUBBTNWIDGET_H
