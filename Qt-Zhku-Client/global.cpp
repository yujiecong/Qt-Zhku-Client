#include "global.h"
QNetworkAccessManager manager;
QString zhkuName;
QString zhkuId;
QString CUR_XNXQ;
QNetworkReply *getReqReply(QUrl url,QByteArray para)
{
    QNetworkRequest req(QUrl(url.url()+para));
    req.setRawHeader("Content-Type", "application/x-www-form-urlencoded");
        req.setRawHeader("User-Agent","Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.190 Safari/537.36");
    return manager.get(req);
}

QNetworkReply *postReqReply(QUrl url,QByteArray a)
{
    QNetworkRequest req(url);
    req.setRawHeader("Content-Type", "application/x-www-form-urlencoded");
        req.setRawHeader("User-Agent","Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.190 Safari/537.36");
    return manager.post(req,a);
}

QNetworkReply *getReqReply(QString url, QByteArray para)
{
    QNetworkRequest req(QUrl(url+para));
    req.setRawHeader("Content-Type", "application/x-www-form-urlencoded");
    req.setRawHeader("User-Agent","Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.190 Safari/537.36");
    return manager.get(req);
}

QNetworkReply *postReqReply(QString url, QByteArray a)
{
    QUrl u(url);
    QNetworkRequest req(u);
    req.setRawHeader("Content-Type", "application/x-www-form-urlencoded");
        req.setRawHeader("User-Agent","Mozilla/5.0 (Windows NT 10.0; WOW64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.190 Safari/537.36");
    return manager.post(req,a);
}

QStringList reFindAll(QRegExp &ex, QString &content)
{
    int pos=0;
    QStringList list;
    while ((pos = ex.indexIn(content, pos)) != -1)
    {
        list << ex.cap();                                   // 第一个捕获到的文本
        pos += ex.matchedLength();             // 上一个匹配的字符串的长度
    }
    return list;
}

QString reFindOne(QRegExp &ex, QString &content)
{
    content.indexOf(ex);
    return ex.cap();
}


