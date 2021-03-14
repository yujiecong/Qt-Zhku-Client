/********************************************************************************
** Form generated from reading UI file 'QueryScore_Ui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYSCORE_UI_H
#define UI_QUERYSCORE_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QueryScore_Ui
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_5;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *QueryScore_Ui)
    {
        if (QueryScore_Ui->objectName().isEmpty())
            QueryScore_Ui->setObjectName(QStringLiteral("QueryScore_Ui"));
        QueryScore_Ui->resize(847, 533);
        verticalLayout = new QVBoxLayout(QueryScore_Ui);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(QueryScore_Ui);
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
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(8);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        comboBox = new QComboBox(widget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_2->addWidget(comboBox);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        comboBox_3 = new QComboBox(widget_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));

        horizontalLayout_2->addWidget(comboBox_3);

        widget = new QWidget(widget_2);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setFont(font);

        horizontalLayout->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));
        radioButton_2->setFont(font);

        horizontalLayout->addWidget(radioButton_2);


        horizontalLayout_2->addWidget(widget);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        radioButton_3 = new QRadioButton(widget_4);
        radioButton_3->setObjectName(QStringLiteral("radioButton_3"));
        radioButton_3->setFont(font);

        horizontalLayout_4->addWidget(radioButton_3);

        radioButton_4 = new QRadioButton(widget_4);
        radioButton_4->setObjectName(QStringLiteral("radioButton_4"));
        radioButton_4->setFont(font);

        horizontalLayout_4->addWidget(radioButton_4);

        radioButton_5 = new QRadioButton(widget_4);
        radioButton_5->setObjectName(QStringLiteral("radioButton_5"));
        radioButton_5->setFont(font);

        horizontalLayout_4->addWidget(radioButton_5);


        horizontalLayout_2->addWidget(widget_4);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        radioButton_6 = new QRadioButton(widget_3);
        radioButton_6->setObjectName(QStringLiteral("radioButton_6"));
        radioButton_6->setFont(font);

        horizontalLayout_3->addWidget(radioButton_6);

        radioButton_7 = new QRadioButton(widget_3);
        radioButton_7->setObjectName(QStringLiteral("radioButton_7"));
        radioButton_7->setFont(font);

        horizontalLayout_3->addWidget(radioButton_7);


        horizontalLayout_2->addWidget(widget_3);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        verticalLayout_2 = new QVBoxLayout(widget_5);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget_5);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout_2->addWidget(widget_5);


        verticalLayout->addWidget(widget_2);

        scrollArea = new QScrollArea(QueryScore_Ui);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 827, 443));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(QueryScore_Ui);

        QMetaObject::connectSlotsByName(QueryScore_Ui);
    } // setupUi

    void retranslateUi(QWidget *QueryScore_Ui)
    {
        QueryScore_Ui->setWindowTitle(QApplication::translate("QueryScore_Ui", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("QueryScore_Ui", "\345\255\246\345\271\264", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("QueryScore_Ui", "2020-2021", Q_NULLPTR)
        );
        label_3->setText(QApplication::translate("QueryScore_Ui", "\345\255\246\346\234\237", Q_NULLPTR));
        radioButton->setText(QApplication::translate("QueryScore_Ui", "\345\216\237\345\247\213\346\210\220\347\273\251", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("QueryScore_Ui", "\346\234\211\346\225\210\346\210\220\347\273\251", Q_NULLPTR));
        radioButton_3->setText(QApplication::translate("QueryScore_Ui", "\345\205\245\345\255\246\344\273\245\346\235\245", Q_NULLPTR));
        radioButton_4->setText(QApplication::translate("QueryScore_Ui", "\345\255\246\345\271\264", Q_NULLPTR));
        radioButton_5->setText(QApplication::translate("QueryScore_Ui", "\345\255\246\346\234\237", Q_NULLPTR));
        radioButton_6->setText(QApplication::translate("QueryScore_Ui", "\344\270\273\344\277\256", Q_NULLPTR));
        radioButton_7->setText(QApplication::translate("QueryScore_Ui", "\350\276\205\344\277\256", Q_NULLPTR));
        pushButton->setText(QApplication::translate("QueryScore_Ui", "\346\243\200\347\264\242", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("QueryScore_Ui", "\346\211\223\345\215\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QueryScore_Ui: public Ui_QueryScore_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYSCORE_UI_H
