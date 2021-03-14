#include "StrProcessing.h"

StrProcessing::StrProcessing()
{

}

QByteArray  StrProcessing::toUrlEncode(const QByteArray  &inStr)
{
    return QByteArray(QTextCodec::codecForName("utf8")->fromUnicode(inStr).toPercentEncoding());
}

QString StrProcessing::getMd5(QString in)
{
    return QCryptographicHash::hash(in.toLatin1(), QCryptographicHash::Md5 ).toHex();
}

QJsonObject StrProcessing::qString2Json(QString jsonString)
{
    QJsonDocument jsonDocument = QJsonDocument::fromJson(jsonString.toLocal8Bit().data());
    if(jsonDocument.isNull())
    {
        qDebug()<< "String NULL"<< jsonString.toLocal8Bit().data();
    }
    QJsonObject jsonObject = jsonDocument.object();
    return jsonObject;
}

QString StrProcessing::qJson2QString(QJsonObject jsonObject)
{
    return QString(QJsonDocument(jsonObject).toJson());
}
QString StrProcessing::gbk2Utf8(const QByteArray &inStr)
{
    QTextCodec *gbk = QTextCodec::codecForName("GB18030");
    QString g2u = gbk->toUnicode(inStr);
    return g2u;
}

