/********************************************************************************
** Form generated from reading UI file 'ScoreDistubing_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.9.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCOREDISTUBING_UI_H
#define UI_SCOREDISTUBING_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ScoreDistubing_Ui
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBox;
    QLabel *label_3;
    QComboBox *comboBox_3;
    QGroupBox *groupBox_4;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *fromFreshToNow;
    QRadioButton *byYear;
    QRadioButton *bySemester;
    QWidget *widget_5;
    QVBoxLayout *verticalLayout_2;
    QPushButton *queryDisBtn;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *ScoreDistubing_Ui)
    {
        if (ScoreDistubing_Ui->objectName().isEmpty())
            ScoreDistubing_Ui->setObjectName(QStringLiteral("ScoreDistubing_Ui"));
        ScoreDistubing_Ui->resize(744, 443);
        verticalLayout = new QVBoxLayout(ScoreDistubing_Ui);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        widget_2 = new QWidget(ScoreDistubing_Ui);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(widget_2);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(9);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        comboBox->setFont(font1);

        horizontalLayout->addWidget(comboBox);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->setObjectName(QStringLiteral("comboBox_3"));
        comboBox_3->setFont(font1);

        horizontalLayout->addWidget(comboBox_3);


        horizontalLayout_2->addWidget(groupBox);

        groupBox_4 = new QGroupBox(widget_2);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        horizontalLayout_4 = new QHBoxLayout(groupBox_4);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        fromFreshToNow = new QRadioButton(groupBox_4);
        fromFreshToNow->setObjectName(QStringLiteral("fromFreshToNow"));
        fromFreshToNow->setFont(font);

        horizontalLayout_4->addWidget(fromFreshToNow);

        byYear = new QRadioButton(groupBox_4);
        byYear->setObjectName(QStringLiteral("byYear"));
        byYear->setFont(font);

        horizontalLayout_4->addWidget(byYear);

        bySemester = new QRadioButton(groupBox_4);
        bySemester->setObjectName(QStringLiteral("bySemester"));
        bySemester->setFont(font);
        bySemester->setChecked(true);

        horizontalLayout_4->addWidget(bySemester);


        horizontalLayout_2->addWidget(groupBox_4);

        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        verticalLayout_2 = new QVBoxLayout(widget_5);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        queryDisBtn = new QPushButton(widget_5);
        queryDisBtn->setObjectName(QStringLiteral("queryDisBtn"));

        verticalLayout_2->addWidget(queryDisBtn);


        horizontalLayout_2->addWidget(widget_5);


        verticalLayout->addWidget(widget_2);

        scrollArea = new QScrollArea(ScoreDistubing_Ui);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 726, 349));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        textBrowser = new QTextBrowser(scrollAreaWidgetContents);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));

        verticalLayout_3->addWidget(textBrowser);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 5);

        retranslateUi(ScoreDistubing_Ui);

        QMetaObject::connectSlotsByName(ScoreDistubing_Ui);
    } // setupUi

    void retranslateUi(QWidget *ScoreDistubing_Ui)
    {
        ScoreDistubing_Ui->setWindowTitle(QApplication::translate("ScoreDistubing_Ui", "Form", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("ScoreDistubing_Ui", "\345\255\246\345\271\264\345\255\246\346\234\237", Q_NULLPTR));
        label->setText(QApplication::translate("ScoreDistubing_Ui", "\345\255\246\345\271\264", Q_NULLPTR));
        label_3->setText(QApplication::translate("ScoreDistubing_Ui", "\345\255\246\346\234\237", Q_NULLPTR));
        comboBox_3->clear();
        comboBox_3->insertItems(0, QStringList()
         << QApplication::translate("ScoreDistubing_Ui", "\347\254\254\344\270\200\345\255\246\346\234\237", Q_NULLPTR)
         << QApplication::translate("ScoreDistubing_Ui", "\347\254\254\344\272\214\345\255\246\346\234\237", Q_NULLPTR)
        );
        groupBox_4->setTitle(QApplication::translate("ScoreDistubing_Ui", "\346\237\245\350\257\242\347\261\273\345\236\213", Q_NULLPTR));
        fromFreshToNow->setText(QApplication::translate("ScoreDistubing_Ui", "\345\205\245\345\255\246\344\273\245\346\235\245", Q_NULLPTR));
        byYear->setText(QApplication::translate("ScoreDistubing_Ui", "\345\255\246\345\271\264", Q_NULLPTR));
        bySemester->setText(QApplication::translate("ScoreDistubing_Ui", "\345\255\246\346\234\237", Q_NULLPTR));
        queryDisBtn->setText(QApplication::translate("ScoreDistubing_Ui", "\346\243\200\347\264\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ScoreDistubing_Ui: public Ui_ScoreDistubing_Ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCOREDISTUBING_UI_H
