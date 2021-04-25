/********************************************************************************
** Form generated from reading UI file 'SubMenuWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBMENUWIDGET_H
#define UI_SUBMENUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
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
            SubMenuWidget->setObjectName(QString::fromUtf8("SubMenuWidget"));
        SubMenuWidget->resize(131, 125);
        verticalLayout = new QVBoxLayout(SubMenuWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        retranslateUi(SubMenuWidget);

        QMetaObject::connectSlotsByName(SubMenuWidget);
    } // setupUi

    void retranslateUi(QWidget *SubMenuWidget)
    {
        SubMenuWidget->setWindowTitle(QCoreApplication::translate("SubMenuWidget", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SubMenuWidget: public Ui_SubMenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBMENUWIDGET_H
