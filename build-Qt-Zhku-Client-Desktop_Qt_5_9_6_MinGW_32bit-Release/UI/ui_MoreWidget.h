/********************************************************************************
** Form generated from reading UI file 'MoreWidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOREWIDGET_H
#define UI_MOREWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MoreWidget
{
public:
    QHBoxLayout *horizontalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QPushButton *pushButton_9;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QComboBox *comboBox_2;
    QPushButton *pushButton_12;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QPushButton *pushButton_11;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *tab_2;

    void setupUi(QWidget *MoreWidget)
    {
        if (MoreWidget->objectName().isEmpty())
            MoreWidget->setObjectName(QStringLiteral("MoreWidget"));
        MoreWidget->resize(960, 614);
        horizontalLayout_2 = new QHBoxLayout(MoreWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        widget = new QWidget(MoreWidget);
        widget->setObjectName(QStringLiteral("widget"));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget1 = new QWidget(widget);
        widget1->setObjectName(QStringLiteral("widget1"));
        widget1->setStyleSheet(QStringLiteral("background-color: rgb(31,141,218);"));
        horizontalLayout = new QHBoxLayout(widget1);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget1);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(32, 32));
        label->setMaximumSize(QSize(32, 32));
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label->setPixmap(QPixmap(QString::fromUtf8(":/assets/btnIcon/\345\256\211\346\216\222.svg")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addWidget(widget1);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setStyleSheet(QLatin1String("QWidget{background-color: rgb(255, 255, 255);}\n"
"QPushButton {\n"
"\n"
"color: rgb(43, 43, 43);\n"
"border-radius: 10px;\n"
"background-color: rgba(255, 255, 255, 200);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"    background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                      stop: 0 #dadbde, stop: 1 #f6f7fa);\n"
"}\n"
""));
        verticalLayout_2 = new QVBoxLayout(widget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QLatin1String("text-align:left\n"
""));
        pushButton->setFlat(true);

        verticalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setStyleSheet(QLatin1String("text-align:left\n"
""));
        pushButton_2->setFlat(true);

        verticalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(widget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setStyleSheet(QLatin1String("text-align:left\n"
""));
        pushButton_3->setFlat(true);

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(widget_2);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setStyleSheet(QLatin1String("text-align:left\n"
""));
        pushButton_4->setFlat(true);

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_5 = new QPushButton(widget_2);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setStyleSheet(QLatin1String("text-align:left\n"
""));
        pushButton_5->setFlat(true);

        verticalLayout_2->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(widget_2);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setStyleSheet(QLatin1String("text-align:left\n"
""));
        pushButton_6->setFlat(true);

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(widget_2);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setStyleSheet(QLatin1String("text-align:left\n"
""));
        pushButton_7->setFlat(true);

        verticalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(widget_2);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setStyleSheet(QLatin1String("text-align:left\n"
""));
        pushButton_8->setFlat(true);

        verticalLayout_2->addWidget(pushButton_8);

        pushButton_10 = new QPushButton(widget_2);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setStyleSheet(QLatin1String("text-align:left;\n"
""));
        pushButton_10->setAutoRepeat(false);
        pushButton_10->setFlat(true);

        verticalLayout_2->addWidget(pushButton_10);

        pushButton_9 = new QPushButton(widget_2);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setStyleSheet(QLatin1String("text-align:left\n"
""));
        pushButton_9->setFlat(true);

        verticalLayout_2->addWidget(pushButton_9);


        verticalLayout->addWidget(widget_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 6);

        horizontalLayout_2->addWidget(widget);

        tabWidget = new QTabWidget(MoreWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        verticalLayout_4 = new QVBoxLayout(tab);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(10);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QStringLiteral("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(label_3);

        comboBox = new QComboBox(tab);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout_5->addWidget(comboBox);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QStringLiteral("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);

        horizontalLayout_5->addWidget(label_4);

        lineEdit = new QLineEdit(tab);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        horizontalLayout_5->addWidget(lineEdit);

        comboBox_2 = new QComboBox(tab);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_5->addWidget(comboBox_2);

        pushButton_12 = new QPushButton(tab);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));

        horizontalLayout_5->addWidget(pushButton_12);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(10);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        widget_3 = new QWidget(tab);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        radioButton = new QRadioButton(widget_3);
        radioButton->setObjectName(QStringLiteral("radioButton"));

        horizontalLayout_3->addWidget(radioButton);

        radioButton_2 = new QRadioButton(widget_3);
        radioButton_2->setObjectName(QStringLiteral("radioButton_2"));

        horizontalLayout_3->addWidget(radioButton_2);


        horizontalLayout_4->addWidget(widget_3);

        label_5 = new QLabel(tab);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_2 = new QLineEdit(tab);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(lineEdit_2);

        label_6 = new QLabel(tab);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(50, 30));
        label_6->setMaximumSize(QSize(50, 30));
        label_6->setScaledContents(true);

        horizontalLayout_4->addWidget(label_6);

        pushButton_11 = new QPushButton(tab);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));

        horizontalLayout_4->addWidget(pushButton_11);


        verticalLayout_3->addLayout(horizontalLayout_4);

        scrollArea = new QScrollArea(tab);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 752, 476));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);


        verticalLayout_4->addLayout(verticalLayout_3);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout_2->addWidget(tabWidget);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 5);

        retranslateUi(MoreWidget);

        pushButton->setDefault(false);
        pushButton_2->setDefault(false);
        pushButton_3->setDefault(false);
        pushButton_4->setDefault(false);
        pushButton_5->setDefault(false);
        pushButton_6->setDefault(false);
        pushButton_7->setDefault(false);
        pushButton_8->setDefault(false);
        pushButton_10->setDefault(false);
        pushButton_9->setDefault(false);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MoreWidget);
    } // setupUi

    void retranslateUi(QWidget *MoreWidget)
    {
        MoreWidget->setWindowTitle(QApplication::translate("MoreWidget", "Form", Q_NULLPTR));
        label->setText(QString());
        label_2->setText(QApplication::translate("MoreWidget", "\346\225\231\345\255\246\345\256\211\346\216\222", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MoreWidget", "\350\257\276\347\250\213\345\256\211\346\216\222", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MoreWidget", "\346\225\231\345\256\244\350\257\276\350\241\250", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MoreWidget", "\347\217\255\347\272\247\350\257\276\350\241\250", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MoreWidget", "\346\225\231\345\256\244\350\257\276\350\241\250", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MoreWidget", "\344\273\273\351\200\211\350\257\276\350\241\250", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("MoreWidget", "\345\221\250/\346\227\245/\350\212\202\346\254\241\350\257\276\350\241\250", Q_NULLPTR));
        pushButton_7->setText(QApplication::translate("MoreWidget", "\350\257\276\347\250\213\346\225\231\345\255\246\350\277\233\345\272\246\350\241\250", Q_NULLPTR));
        pushButton_8->setText(QApplication::translate("MoreWidget", "\347\217\255\347\272\247\346\225\231\345\255\246\350\277\233\345\272\246\350\241\250", Q_NULLPTR));
        pushButton_10->setText(QApplication::translate("MoreWidget", "\345\210\206\351\231\242(\347\263\273)/\351\203\250\346\214\211\347\217\255\347\272\247\n"
"\346\237\245\347\234\213\345\256\236\350\267\265\347\216\257\350\212\202\345\256\211\346\216\222", Q_NULLPTR));
        pushButton_9->setText(QApplication::translate("MoreWidget", "\346\237\245\347\234\213\345\255\246\346\234\237\345\256\236\350\267\265\346\225\231\345\255\246\350\277\233\347\250\213", Q_NULLPTR));
        label_3->setText(QApplication::translate("MoreWidget", "  \345\255\246\345\271\264\345\255\246\346\234\237", Q_NULLPTR));
        label_4->setText(QApplication::translate("MoreWidget", " \350\257\276\347\250\213", Q_NULLPTR));
        pushButton_12->setText(QApplication::translate("MoreWidget", "\346\211\223\345\215\260", Q_NULLPTR));
        radioButton->setText(QApplication::translate("MoreWidget", "\346\240\274\345\274\217 \344\270\200", Q_NULLPTR));
        radioButton_2->setText(QApplication::translate("MoreWidget", " \346\240\274\345\274\217\344\272\214", Q_NULLPTR));
        label_5->setText(QApplication::translate("MoreWidget", " \351\252\214\350\257\201\347\240\201", Q_NULLPTR));
        label_6->setText(QString());
        pushButton_11->setText(QApplication::translate("MoreWidget", "\346\243\200\347\264\242", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MoreWidget", "\350\257\276\347\250\213\345\256\211\346\216\222", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MoreWidget", " \346\225\231\345\256\244 \350\257\276\350\241\250", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MoreWidget: public Ui_MoreWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOREWIDGET_H
