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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
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
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QCheckBox *checkBox;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QComboBox *comboBox_2;
    QPushButton *queryCurriculumBtn;
    QPushButton *pushButton_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *imgVerticalLayout;

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

        widget = new QWidget(widget_2);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);


        horizontalLayout_2->addWidget(widget);

        checkBox = new QCheckBox(widget_2);
        checkBox->setObjectName(QStringLiteral("checkBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy1);

        horizontalLayout_2->addWidget(checkBox);

        lineEdit = new QLineEdit(widget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        sizePolicy1.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy1);
        lineEdit->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(lineEdit);

        label_2 = new QLabel(widget_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);

        horizontalLayout_2->addWidget(label_2);

        comboBox_2 = new QComboBox(widget_2);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_2->addWidget(comboBox_2);

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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 813, 462));
        imgVerticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        imgVerticalLayout->setObjectName(QStringLiteral("imgVerticalLayout"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(CurriculumArrangement_Ui);

        QMetaObject::connectSlotsByName(CurriculumArrangement_Ui);
    } // setupUi

    void retranslateUi(QWidget *CurriculumArrangement_Ui)
    {
        CurriculumArrangement_Ui->setWindowTitle(QApplication::translate("CurriculumArrangement_Ui", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("CurriculumArrangement_Ui", "\345\255\246\345\271\264\345\255\246\346\234\237", Q_NULLPTR));
        radioButton->setText(QApplication::translate("CurriculumArrangement_Ui", "\346\240\274\345\274\217\344\270\200", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("CurriculumArrangement_Ui", "\346\240\274\345\274\217\344\272\214", Q_NULLPTR));
        checkBox->setText(QApplication::translate("CurriculumArrangement_Ui", "\345\221\250\346\254\241", Q_NULLPTR));
        label_2->setText(QApplication::translate("CurriculumArrangement_Ui", "\346\216\222\345\272\217", Q_NULLPTR));
        queryCurriculumBtn->setText(QApplication::translate("CurriculumArrangement_Ui", "\346\243\200\347\264\242", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("CurriculumArrangement_Ui", "\346\211\223\345\215\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CurriculumArrangement_Ui: public Ui_CurriculumArrangement_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CURRICULUMARRANGEMENT_UI_H
