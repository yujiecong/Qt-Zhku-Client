#-------------------------------------------------
#
# Project created by QtCreator 2021-03-07T15:14:36
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Qt-Zhku-Client
TEMPLATE = app
CONFIG += C++11
# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0
#DEFINES += QT_NO_DEBUG_OUTPUT
UI_DIR+=./UI
SOURCES += \
    ChoosingResult_Ui.cpp \
    Closed_404_Ui.cpp \
    Default_Ui.cpp \
    Other_ChangeUserInfo_Ui.cpp \
    RemoveChoosing_Ui.cpp \
    StuduentId_Ui.cpp \
    SupplementChossing_Ui.cpp \
        main.cpp \
    ZhkuLoginWidget.cpp \
    ZhkuClientMain.cpp \
    SubMenuWidget.cpp \
    SubMenuBtn.cpp \
    StrProcessing.cpp \
    GetFocusLineEdit.cpp \
    FuncTable.cpp \
    CurriculumArrangement_Ui.cpp \
    QueryScore_Ui.cpp \
    ImgLabel.cpp \
    CloseDialog.cpp \
    ScoreDistubing_ui.cpp \
    UserAvater.cpp \
    Rankexam_Ui.cpp \
    ExamArrangement_Ui.cpp \
    MoreWidget.cpp \
    global.cpp \
    widgetwithhtml.cpp \
    zhkuloginwidgetbyandroid.cpp


HEADERS += \
    ChoosingResult_Ui.h \
    Closed_404_Ui.h \
    Default_Ui.h \
    Other_ChangeUserInfo_Ui.h \
    RemoveChoosing_Ui.h \
    StuduentId_Ui.h \
    SupplementChossing_Ui.h \
    global.h \
    ZhkuLoginWidget.h \
    ZhkuClientMain.h \
    SubMenuWidget.h \
    SubMenuBtn.h \
    StrProcessing.h \
    GetFocusLineEdit.h \
    FuncTable.h \
    CurriculumArrangement_ui.h \
    QueryScore_Ui.h \
    ImgLabel.h \
    CloseDialog.h \
    ScoreDistubing_ui.h \
    UserAvater.h \
    Rankexam_Ui.h \
    ExamArrangement_Ui.h \
    MoreWidget.h \
    widgetwithhtml.h \
    zhkuloginwidgetbyandroid.h


FORMS += \
    ChoosingResult_Ui.ui \
    Closed_404_Ui.ui \
    Default_Ui.ui \
    Other_ChangeUserInfo_Ui.ui \
    RemoveChoosing_Ui.ui \
    StuduentId_Ui.ui \
    SupplementChossing_Ui.ui \
    ZhkuLoginWidget.ui \
    ZhkuClientMain.ui \
    SubMenuWidget.ui \
    SubMenuBtn.ui \
    FuncTable.ui \
    CurriculumArrangement_Ui.ui \
    QueryScore_Ui.ui \
    closedialog.ui \
    CloseDialog.ui \
    ScoreDistubing_ui.ui \
    UserAvater.ui \
    RankExam_Ui.ui \
    ExamArrangement_Ui.ui \
    MoreWidget.ui \
    zhkuloginwidgetbyandroid.ui

RESOURCES += \
    loginassets.qrc

DISTFILES += \
    android/AndroidManifest.xml \
    android/build.gradle \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradle/wrapper/gradle-wrapper.jar \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradle/wrapper/gradle-wrapper.properties \
    android/gradlew \
    android/gradlew \
    android/gradlew.bat \
    android/gradlew.bat \
    android/res/values/libs.xml

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android
