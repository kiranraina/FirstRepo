#ifndef MYCARMODEL_H
#define MYCARMODEL_H
#include<QDebug>
#include <QObject>

class MyCARModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString carname READ getcarname WRITE setCarname NOTIFY carnameChanged)
public:
    explicit MyCARModel(QObject *parent = 0);
~MyCARModel();


    QString getcarname() const;
    void setCarname(const QString carname);

private:
    QString m_carname;
signals:
    void carnameChanged();

public slots:
    void print();
};

#endif // MYCARMODEL_H
