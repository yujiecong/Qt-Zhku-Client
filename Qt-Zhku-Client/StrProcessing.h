#ifndef STRPROCESSING_H
#define STRPROCESSING_H
#include <QWidget>
#include <QtNetwork>

class StrProcessing
{
public:
    StrProcessing();
     QString gbk2Utf8(const QByteArray &inStr);
     QByteArray  toUrlEncode(const QByteArray  &inStr);
     QString getMd5( QString );
    QJsonObject qString2Json(QString jsonString);
     QString qJson2QString(QJsonObject jsonObject);

};

#endif // STRPROCESSING_H
