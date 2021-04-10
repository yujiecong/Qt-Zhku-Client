/********************************************************************************
** Form generated from reading UI file 'CurriculumArrangement_Ui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRICULUMARRANGEMENT_UI_H
#define UI_CURRICULUMARRANGEMENT_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CurriculumArrangement_Ui
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *comboBox;
    QGroupBox *groupBox1;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QGroupBox *type1Widget;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QPushButton *queryCurriculumBtn;
    QPushButton *pushButton_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *imgVerticalLayout;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *CurriculumArrangement_Ui)
    {
        if (CurriculumArrangement_Ui->objectName().isEmpty())
            CurriculumArrangement_Ui->setObjectName(QString::fromUtf8("CurriculumArrangement_Ui"));
        CurriculumArrangement_Ui->resize(815, 516);
        CurriculumArrangement_Ui->setStyleSheet(QString::fromUtf8("background-color: rgba(255, 255, 255, 222);"));
        verticalLayout = new QVBoxLayout(CurriculumArrangement_Ui);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(CurriculumArrangement_Ui);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_4->addWidget(comboBox);


        horizontalLayout_2->addWidget(groupBox);

        groupBox1 = new QGroupBox(widget_2);
        groupBox1->setObjectName(QString::fromUtf8("groupBox1"));
        horizontalLayout = new QHBoxLayout(groupBox1);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        radioButton = new QRadioButton(groupBox1);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox1);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setEnabled(true);

        horizontalLayout->addWidget(radioButton_2);


        horizontalLayout_2->addWidget(groupBox1);

        type1Widget = new QGroupBox(widget_2);
        type1Widget->setObjectName(QString::fromUtf8("type1Widget"));
        horizontalLayout_3 = new QHBoxLayout(type1Widget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkBox = new QCheckBox(type1Widget);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy);
        checkBox->setChecked(false);

        horizontalLayout_3->addWidget(checkBox);

        lineEdit = new QLineEdit(type1Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setEnabled(false);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(lineEdit);

        label_2 = new QLabel(type1Widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label_2);

        comboBox_2 = new QComboBox(type1Widget);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));

        horizontalLayout_3->addWidget(comboBox_2);


        horizontalLayout_2->addWidget(type1Widget);

        queryCurriculumBtn = new QPushButton(widget_2);
        queryCurriculumBtn->setObjectName(QString::fromUtf8("queryCurriculumBtn"));

        horizontalLayout_2->addWidget(queryCurriculumBtn);

        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addWidget(widget_2);

        scrollArea = new QScrollArea(CurriculumArrangement_Ui);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 813, 444));
        imgVerticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        imgVerticalLayout->setSpacing(50);
        imgVerticalLayout->setObjectName(QString::fromUtf8("imgVerticalLayout"));
        imgVerticalLayout->setContentsMargins(50, 50, 50, 50);
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        imgVerticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(CurriculumArrangement_Ui);

        QMetaObject::connectSlotsByName(CurriculumArrangement_Ui);
    } // setupUi

    void retranslateUi(QWidget *CurriculumArrangement_Ui)
    {
        CurriculumArrangement_Ui->setWindowTitle(QCoreApplication::translate("CurriculumArrangement_Ui", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CurriculumArrangement_Ui", "\345\255\246\345\271\264\345\255\246\346\234\237", nullptr));
        groupBox1->setTitle(QCoreApplication::translate("CurriculumArrangement_Ui", "\350\257\276\347\250\213\346\240\274\345\274\217", nullptr));
        radioButton->setText(QCoreApplication::translate("CurriculumArrangement_Ui", "\346\240\274\345\274\217\344\270\200", nullptr));
        radioButton_2->setText(QCoreApplication::translate("CurriculumArrangement_Ui", "\346\240\274\345\274\217\344\272\214", nullptr));
        type1Widget->setTitle(QCoreApplication::translate("CurriculumArrangement_Ui", "\350\257\276\347\250\213\350\267\250\345\272\246", nullptr));
        checkBox->setText(QCoreApplication::translate("CurriculumArrangement_Ui", "\345\221\250\346\254\241", nullptr));
        lineEdit->setText(QCoreApplication::translate("CurriculumArrangement_Ui", "1-18", nullptr));
        label_2->setText(QCoreApplication::translate("CurriculumArrangement_Ui", "\346\216\222\345\272\217", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("CurriculumArrangement_Ui", "\346\214\211\350\257\276\347\250\213/\347\216\257\350\212\202", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("CurriculumArrangement_Ui", "\346\214\211\346\227\266\351\227\264", nullptr));

        queryCurriculumBtn->setText(QCoreApplication::translate("CurriculumArrangement_Ui", "\346\243\200\347\264\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CurriculumArrangement_Ui", "\346\211\223\345\215\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CurriculumArrangement_Ui: public Ui_CurriculumArrangement_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRICULUMARRANGEMENT_UI_H
