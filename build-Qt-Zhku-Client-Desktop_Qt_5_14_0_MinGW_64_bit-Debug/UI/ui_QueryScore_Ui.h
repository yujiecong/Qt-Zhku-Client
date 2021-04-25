/********************************************************************************
** Form generated from reading UI file 'QueryScore_Ui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYSCORE_UI_H
#define UI_QUERYSCORE_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
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
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rawScore;
    QRadioButton *vaildScore;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *fromFreshToNow;
    QRadioButton *byYear;
    QRadioButton *bySemester;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *mainlyLearn;
    QRadioButton *otherlyLearn;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_2;
    QPushButton *queryScoreBtn;
    QPushButton *pushButton_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;

    void setupUi(QWidget *QueryScore_Ui)
    {
        if (QueryScore_Ui->objectName().isEmpty())
            QueryScore_Ui->setObjectName(QString::fromUtf8("QueryScore_Ui"));
        QueryScore_Ui->resize(795, 476);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QueryScore_Ui->sizePolicy().hasHeightForWidth());
        QueryScore_Ui->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QueryScore_Ui);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(QueryScore_Ui);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 795, 79));
        horizontalLayout_5 = new QHBoxLayout(scrollAreaWidgetContents_2);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        groupBox_2 = new QGroupBox(scrollAreaWidgetContents_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        label->setFont(font);

        horizontalLayout_6->addWidget(label);

        comboBox = new QComboBox(groupBox_2);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        comboBox->setFont(font1);

        horizontalLayout_6->addWidget(comboBox);

        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);

        horizontalLayout_6->addWidget(label_3);

        comboBox_3 = new QComboBox(groupBox_2);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setFont(font1);

        horizontalLayout_6->addWidget(comboBox_3);


        horizontalLayout_5->addWidget(groupBox_2);

        widget_2 = new QWidget(scrollAreaWidgetContents_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        rawScore = new QRadioButton(groupBox);
        rawScore->setObjectName(QString::fromUtf8("rawScore"));
        rawScore->setFont(font);

        horizontalLayout->addWidget(rawScore);

        vaildScore = new QRadioButton(groupBox);
        vaildScore->setObjectName(QString::fromUtf8("vaildScore"));
        vaildScore->setFont(font);
        vaildScore->setChecked(true);

        horizontalLayout->addWidget(vaildScore);


        horizontalLayout_2->addWidget(groupBox);

        groupBox_4 = new QGroupBox(widget_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        fromFreshToNow = new QRadioButton(groupBox_4);
        fromFreshToNow->setObjectName(QString::fromUtf8("fromFreshToNow"));
        fromFreshToNow->setFont(font);

        horizontalLayout_4->addWidget(fromFreshToNow);

        byYear = new QRadioButton(groupBox_4);
        byYear->setObjectName(QString::fromUtf8("byYear"));
        byYear->setFont(font);

        horizontalLayout_4->addWidget(byYear);

        bySemester = new QRadioButton(groupBox_4);
        bySemester->setObjectName(QString::fromUtf8("bySemester"));
        bySemester->setFont(font);
        bySemester->setChecked(true);

        horizontalLayout_4->addWidget(bySemester);


        horizontalLayout_2->addWidget(groupBox_4);

        groupBox_3 = new QGroupBox(widget_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QFont font2;
        font2.setPointSize(9);
        groupBox_3->setFont(font2);
        horizontalLayout_3 = new QHBoxLayout(groupBox_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        mainlyLearn = new QRadioButton(groupBox_3);
        mainlyLearn->setObjectName(QString::fromUtf8("mainlyLearn"));
        mainlyLearn->setFont(font);
        mainlyLearn->setChecked(true);

        horizontalLayout_3->addWidget(mainlyLearn);

        otherlyLearn = new QRadioButton(groupBox_3);
        otherlyLearn->setObjectName(QString::fromUtf8("otherlyLearn"));
        otherlyLearn->setFont(font);

        horizontalLayout_3->addWidget(otherlyLearn);


        horizontalLayout_2->addWidget(groupBox_3);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        verticalLayout_2 = new QVBoxLayout(widget_5);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        queryScoreBtn = new QPushButton(widget_5);
        queryScoreBtn->setObjectName(QString::fromUtf8("queryScoreBtn"));

        verticalLayout_2->addWidget(queryScoreBtn);

        pushButton_2 = new QPushButton(widget_5);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout_2->addWidget(widget_5);


        horizontalLayout_5->addWidget(widget_2);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea_2);

        scrollArea = new QScrollArea(QueryScore_Ui);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 795, 397));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 5);

        retranslateUi(QueryScore_Ui);

        QMetaObject::connectSlotsByName(QueryScore_Ui);
    } // setupUi

    void retranslateUi(QWidget *QueryScore_Ui)
    {
        QueryScore_Ui->setWindowTitle(QCoreApplication::translate("QueryScore_Ui", "Form", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("QueryScore_Ui", "\345\255\246\345\271\264\345\255\246\346\234\237", nullptr));
        label->setText(QCoreApplication::translate("QueryScore_Ui", "\345\255\246\345\271\264", nullptr));
        label_3->setText(QCoreApplication::translate("QueryScore_Ui", "\345\255\246\346\234\237", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("QueryScore_Ui", "\347\254\254\344\270\200\345\255\246\346\234\237", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("QueryScore_Ui", "\347\254\254\344\272\214\345\255\246\346\234\237", nullptr));

        groupBox->setTitle(QCoreApplication::translate("QueryScore_Ui", "\346\210\220\347\273\251\347\261\273\345\236\213", nullptr));
        rawScore->setText(QCoreApplication::translate("QueryScore_Ui", "\345\216\237\345\247\213\346\210\220\347\273\251", nullptr));
        vaildScore->setText(QCoreApplication::translate("QueryScore_Ui", "\346\234\211\346\225\210\346\210\220\347\273\251", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("QueryScore_Ui", "\346\210\220\347\273\251\350\267\250\345\272\246", nullptr));
        fromFreshToNow->setText(QCoreApplication::translate("QueryScore_Ui", "\345\205\245\345\255\246\344\273\245\346\235\245", nullptr));
        byYear->setText(QCoreApplication::translate("QueryScore_Ui", "\345\255\246\345\271\264", nullptr));
        bySemester->setText(QCoreApplication::translate("QueryScore_Ui", "\345\255\246\346\234\237", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("QueryScore_Ui", "\346\210\220\347\273\251\344\270\273\347\261\273", nullptr));
        mainlyLearn->setText(QCoreApplication::translate("QueryScore_Ui", "\344\270\273\344\277\256", nullptr));
        otherlyLearn->setText(QCoreApplication::translate("QueryScore_Ui", "\350\276\205\344\277\256", nullptr));
        queryScoreBtn->setText(QCoreApplication::translate("QueryScore_Ui", "\346\243\200\347\264\242", nullptr));
        pushButton_2->setText(QCoreApplication::translate("QueryScore_Ui", "\346\211\223\345\215\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QueryScore_Ui: public Ui_QueryScore_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYSCORE_UI_H
