/********************************************************************************
** Form generated from reading UI file 'QueryScore_Ui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
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
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *rawScore;
    QRadioButton *vaildScore;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *fromFreshToNow;
    QRadioButton *byYear;
    QRadioButton *bySemester;
    QWidget *widget_3;
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
            QueryScore_Ui->setObjectName(QStringLiteral("QueryScore_Ui"));
        QueryScore_Ui->resize(795, 476);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QueryScore_Ui->sizePolicy().hasHeightForWidth());
        QueryScore_Ui->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QueryScore_Ui);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        scrollArea_2 = new QScrollArea(QueryScore_Ui);
        scrollArea_2->setObjectName(QStringLiteral("scrollArea_2"));
        scrollArea_2->setFrameShape(QFrame::NoFrame);
        scrollArea_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 795, 79));
        horizontalLayout_5 = new QHBoxLayout(scrollAreaWidgetContents_2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        widget_2 = new QWidget(scrollAreaWidgetContents_2);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget_2);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        label->setFont(font);

        horizontalLayout_2->addWidget(label);

        comboBox = new QComboBox(widget_2);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        comboBox->setFont(font1);

        horizontalLayout_2->addWidget(comboBox);

        label_3 = new QLabel(widget_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font);

        horizontalLayout_2->addWidget(label_3);

        comboBox_3 = new QComboBox(widget_2);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setFont(font1);

        horizontalLayout_2->addWidget(comboBox_3);

        widget = new QWidget(widget_2);
        widget->setObjectName(QStringLiteral("widget"));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        rawScore = new QRadioButton(widget);
        rawScore->setObjectName(QStringLiteral("rawScore"));
        rawScore->setFont(font);

        horizontalLayout->addWidget(rawScore);

        vaildScore = new QRadioButton(widget);
        vaildScore->setObjectName(QStringLiteral("vaildScore"));
        vaildScore->setFont(font);
        vaildScore->setChecked(true);

        horizontalLayout->addWidget(vaildScore);


        horizontalLayout_2->addWidget(widget);

        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        fromFreshToNow = new QRadioButton(widget_4);
        fromFreshToNow->setObjectName(QStringLiteral("fromFreshToNow"));
        fromFreshToNow->setFont(font);

        horizontalLayout_4->addWidget(fromFreshToNow);

        byYear = new QRadioButton(widget_4);
        byYear->setObjectName(QStringLiteral("byYear"));
        byYear->setFont(font);

        horizontalLayout_4->addWidget(byYear);

        bySemester = new QRadioButton(widget_4);
        bySemester->setObjectName(QStringLiteral("bySemester"));
        bySemester->setFont(font);
        bySemester->setChecked(true);

        horizontalLayout_4->addWidget(bySemester);


        horizontalLayout_2->addWidget(widget_4);

        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        QFont font2;
        font2.setPointSize(9);
        widget_3->setFont(font2);
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        mainlyLearn = new QRadioButton(widget_3);
        mainlyLearn->setObjectName(QStringLiteral("mainlyLearn"));
        mainlyLearn->setFont(font);
        mainlyLearn->setChecked(true);

        horizontalLayout_3->addWidget(mainlyLearn);

        otherlyLearn = new QRadioButton(widget_3);
        otherlyLearn->setObjectName(QStringLiteral("otherlyLearn"));
        otherlyLearn->setFont(font);

        horizontalLayout_3->addWidget(otherlyLearn);


        horizontalLayout_2->addWidget(widget_3);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        verticalLayout_2 = new QVBoxLayout(widget_5);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        queryScoreBtn = new QPushButton(widget_5);
        queryScoreBtn->setObjectName(QStringLiteral("queryScoreBtn"));

        verticalLayout_2->addWidget(queryScoreBtn);

        pushButton_2 = new QPushButton(widget_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);


        horizontalLayout_2->addWidget(widget_5);


        horizontalLayout_5->addWidget(widget_2);

        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea_2);

        scrollArea = new QScrollArea(QueryScore_Ui);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 795, 397));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 5);

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
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("QueryScore_Ui", "\347\254\254\344\270\200\345\255\246\346\234\237", Q_NULLPTR)
         << QApplication::translate("QueryScore_Ui", "\347\254\254\344\272\214\345\255\246\346\234\237", Q_NULLPTR)
        );
        rawScore->setText(QApplication::translate("QueryScore_Ui", "\345\216\237\345\247\213\346\210\220\347\273\251", Q_NULLPTR));
        vaildScore->setText(QApplication::translate("QueryScore_Ui", "\346\234\211\346\225\210\346\210\220\347\273\251", Q_NULLPTR));
        fromFreshToNow->setText(QApplication::translate("QueryScore_Ui", "\345\205\245\345\255\246\344\273\245\346\235\245", Q_NULLPTR));
        byYear->setText(QApplication::translate("QueryScore_Ui", "\345\255\246\345\271\264", Q_NULLPTR));
        bySemester->setText(QApplication::translate("QueryScore_Ui", "\345\255\246\346\234\237", Q_NULLPTR));
        mainlyLearn->setText(QApplication::translate("QueryScore_Ui", "\344\270\273\344\277\256", Q_NULLPTR));
        otherlyLearn->setText(QApplication::translate("QueryScore_Ui", "\350\276\205\344\277\256", Q_NULLPTR));
        queryScoreBtn->setText(QApplication::translate("QueryScore_Ui", "\346\243\200\347\264\242", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("QueryScore_Ui", "\346\211\223\345\215\260", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QueryScore_Ui: public Ui_QueryScore_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYSCORE_UI_H
