/********************************************************************************
** Form generated from reading UI file 'SupplementChossing_Ui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUPPLEMENTCHOSSING_UI_H
#define UI_SUPPLEMENTCHOSSING_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SupplementChossing_Ui
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QLabel *label_2;
    QComboBox *comboBox_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *SupplementChossing_Ui)
    {
        if (SupplementChossing_Ui->objectName().isEmpty())
            SupplementChossing_Ui->setObjectName(QString::fromUtf8("SupplementChossing_Ui"));
        SupplementChossing_Ui->resize(566, 427);
        verticalLayout = new QVBoxLayout(SupplementChossing_Ui);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(SupplementChossing_Ui);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout->addWidget(comboBox);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout->addWidget(comboBox_2);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(label_2);

        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));

        horizontalLayout->addWidget(comboBox_3);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setEnabled(false);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addWidget(groupBox);

        verticalSpacer = new QSpacerItem(20, 380, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        retranslateUi(SupplementChossing_Ui);

        QMetaObject::connectSlotsByName(SupplementChossing_Ui);
    } // setupUi

    void retranslateUi(QWidget *SupplementChossing_Ui)
    {
        SupplementChossing_Ui->setWindowTitle(QCoreApplication::translate("SupplementChossing_Ui", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("SupplementChossing_Ui", "\350\241\245\351\200\211", nullptr));
        label->setText(QCoreApplication::translate("SupplementChossing_Ui", "\350\241\245\351\200\211\350\214\203\345\233\264", nullptr));
        label_2->setText(QCoreApplication::translate("SupplementChossing_Ui", "\346\240\241\345\214\272", nullptr));
        pushButton->setText(QCoreApplication::translate("SupplementChossing_Ui", "\346\243\200\347\264\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("SupplementChossing_Ui", "\347\261\273\345\210\253\350\277\207\346\273\244", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SupplementChossing_Ui: public Ui_SupplementChossing_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUPPLEMENTCHOSSING_UI_H
