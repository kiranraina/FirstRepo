#ifndef MYDISPLAY_H
#define MYDISPLAY_H
#include"QDebug"
#include <QObject>

class MyDisplay : public QObject
{
    Q_OBJECT
public:
    explicit MyDisplay(QObject *parent = 0);
 void Display(QString);
signals:

public slots:

};

#endif // MYDISPLAY_H
