#ifndef GLOBAL_H
#define GLOBAL_H

#include <QWidget>
#include <QtNetwork>
#include "strprocessing.h"
enum Semester{
    FirstHalfSemeSter=0,
    SecondHalfSemester
};
class QNetworkAccessManager;
class QNetworkReply;

//static QNetworkAccessManager *manager;
//static StrProcessing *strProcessor;

static  QNetworkAccessManager  manager;
static  StrProcessing   strProcessor ;

#endif // GLOBAL_H
