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
    QList<QString>*m_movielist;
    QList<QString>::iterator it;
     QTimer *t=new QTimer;
signals:
   void sendMovies(QString);
public slots:
   void recivemovies();
};

#endif // MYSONGLISTMODEL_H
