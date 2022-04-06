#ifndef REALMESPEAKER_H
#define REALMESPEAKER_H
#include<QDebug>
#include <QObject>

class RealMeSpeaker : public QObject
{
    Q_OBJECT
public:
    explicit RealMeSpeaker(QObject *parent = 0);
 ~RealMeSpeaker();
    void startSpeaker(int x);
signals:
    void startPlaying();
//    void startPlaying(int );
    void startP(int );
public slots:
};

#endif // REALMESPEAKER_H
