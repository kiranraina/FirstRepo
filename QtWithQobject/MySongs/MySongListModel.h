#ifndef MYSONGLISTMODEL_H
#define MYSONGLISTMODEL_H
#include"QDebug"
#include"QList"
#include"QTimer"
#include <QObject>

class MySongListModel : public QObject
{
    Q_OBJECT
public:
    explicit MySongListModel(QObject *parent = 0);
   void init();
private:
    QList<QString>*m_songlist;
    QList<QString>::iterator it;
     QTimer *t=new QTimer;
signals:
   void SendSongs(QString);
public slots:
   void Recivesongs();
};

#endif // MYSONGLISTMODEL_H
