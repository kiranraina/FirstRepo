#ifndef DATASAVER_H
#define DATASAVER_H
#include"QDebug"
#include <QObject>

class DataSaver : public QObject
{
    Q_OBJECT
public:
    explicit DataSaver(QObject *parent = 0);
    void save();
     ~DataSaver();

signals:

public slots:
};

#endif // DATASAVER_H
