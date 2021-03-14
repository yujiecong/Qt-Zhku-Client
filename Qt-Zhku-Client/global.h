#ifndef GLOBAL_H
#define GLOBAL_H

#include <QWidget>
#include <QtNetwork>
#include "StrProcessing.h"
enum Semester{
    FirstHalfSemeSter=0,
    SecondHalfSemester
};
class QNetworkAccessManager;
class QNetworkReply;

//static QNetworkAccessManager *manager;
//static StrProcessing *strProcessor;


static  StrProcessing   strProcessor ;

#endif // GLOBAL_H
