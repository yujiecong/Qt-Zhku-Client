#ifndef GLOBAL_H
#define GLOBAL_H

#include <QWidget>


#include "StrProcessing.h"
enum Semester{
    FirstHalfSemeSter=0,
    SecondHalfSemester
};


//static QNetworkAccessManager *manager;
//static StrProcessing *strProcessor;

extern QNetworkAccessManager  manager;
static  StrProcessing   strProcessor ;

QNetworkReply *getReqReply(QUrl url, QByteArray para="");
QNetworkReply *postReqReply(QUrl url, QByteArray a="");

QNetworkReply *getReqReply(QString url, QByteArray para="");
QNetworkReply *postReqReply(QString url, QByteArray a="");

QStringList reFindAll(QRegExp &ex,QString &content);
#endif // GLOBAL_H
