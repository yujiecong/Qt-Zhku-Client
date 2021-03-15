/********************************************************************************
** Form generated from reading UI file 'SubMenuWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBMENUWIDGET_H
#define UI_SUBMENUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SubMenuWidget
{
public:
    QVBoxLayout *verticalLayout;

    void setupUi(QWidget *SubMenuWidget)
    {
        if (SubMenuWidget->objectName().isEmpty())
            SubMenuWidget->setObjectName(QStringLiteral("SubMenuWidget"));
        SubMenuWidget->resize(87, 119);
        verticalLayout = new QVBoxLayout(SubMenuWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));

        retranslateUi(SubMenuWidget);

        QMetaObject::connectSlotsByName(SubMenuWidget);
    } // setupUi

    void retranslateUi(QWidget *SubMenuWidget)
    {
        SubMenuWidget->setWindowTitle(QApplication::translate("SubMenuWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SubMenuWidget: public Ui_SubMenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBMENUWIDGET_H
