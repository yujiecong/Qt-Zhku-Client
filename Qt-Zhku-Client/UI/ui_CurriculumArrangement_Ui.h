/********************************************************************************
** Form generated from reading UI file 'CurriculumArrangement_Ui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CURRICULUMARRANGEMENT_UI_H
#define UI_CURRICULUMARRANGEMENT_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
    QLabel *label;
    QComboBox *comboBox;
    QGroupBox *groupBox;
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
            CurriculumArrangement_Ui->setObjectName(QStringLiteral("CurriculumArrangement_Ui"));
        CurriculumArrangement_Ui->resize(815, 516);
        CurriculumArrangement_Ui->setStyleSheet(QStringLiteral("background-color: rgba(255, 255, 255, 222);"));
        verticalLayout = new QVBoxLayout(CurriculumArrangement_Ui);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget_2 = new QWidget(CurriculumArrangement_Ui);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label);

        comboBox = new QComboBox(widget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setEnabled(true);

        horizontalLayout->addWidget(radioButton_2);


        horizontalLayout_2->addWidget(groupBox);

        type1Widget = new QGroupBox(widget_2);
        type1Widget->setObjectName(QStringLiteral("type1Widget"));
        horizontalLayout_3 = new QHBoxLayout(type1Widget);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        checkBox = new QCheckBox(type1Widget);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        checkBox->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy1);
        checkBox->setChecked(false);

        horizontalLayout_3->addWidget(checkBox);

        lineEdit = new QLineEdit(type1Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_3->addWidget(lineEdit);

        label_2 = new QLabel(type1Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label_2);

        comboBox_2 = new QComboBox(type1Widget);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_3->addWidget(comboBox_2);


        horizontalLayout_2->addWidget(type1Widget);

        queryCurriculumBtn = new QPushButton(widget_2);
        queryCurriculumBtn->setObjectName(QStringLiteral("queryCurriculumBtn"));

        horizontalLayout_2->addWidget(queryCurriculumBtn);

        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);


        verticalLayout->addWidget(widget_2);

        scrollArea = new QScrollArea(CurriculumArrangement_Ui);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 813, 444));
        imgVerticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        imgVerticalLayout->setSpacing(50);
        imgVerticalLayout->setObjectName(QStringLiteral("imgVerticalLayout"));
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
        CurriculumArrangement_Ui->setWindowTitle(QApplication::translate("CurriculumArrangement_Ui", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("CurriculumArrangement_Ui", "\345\255\246\345\271\264\345\255\246\346\234\237", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("CurriculumArrangement_Ui", "\350\257\276\347\250\213\346\240\274\345\274\217", Q_NULLPTR));
        radioButton->setText(QApplication::translate("CurriculumArrangement_Ui", "\346\240\274\345\274\217\344\270\200", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("CurriculumArrangement_Ui", "\346\240\274\345\274\217\344\272\214", Q_NULLPTR));
        type1Widget->setTitle(QApplication::translate("CurriculumArrangement_Ui", "\350\257\276\347\250\213\350\267\250\345\272\246", Q_NULLPTR));
        checkBox->setText(QApplication::translate("CurriculumArrangement_Ui", "\345\221\250\346\254\241", Q_NULLPTR));
        lineEdit->setText(QApplication::translate("CurriculumArrangement_Ui", "1-18", Q_NULLPTR));
        label_2->setText(QApplication::translate("CurriculumArrangement_Ui", "\346\216\222\345\272\217", Q_NULLPTR));
        comboBox_2->clear();
        comboBox_2->insertItems(0, QStringList()
         << QApplication::translate("CurriculumArrangement_Ui", "\346\214\211\350\257\276\347\250\213/\347\216\257\350\212\202", Q_NULLPTR)
         << QApplication::translate("CurriculumArrangement_Ui", "\346\214\211\346\227\266\351\227\264", Q_NULLPTR)
        );
        queryCurriculumBtn->setText(QApplication::translate("CurriculumArrangement_Ui", "\346\243\200\347\264\242", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CurriculumArrangement_Ui", "\346\211\223\345\215\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CurriculumArrangement_Ui: public Ui_CurriculumArrangement_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRICULUMARRANGEMENT_UI_H
