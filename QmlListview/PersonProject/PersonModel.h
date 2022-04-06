#ifndef PERSONMODEL_H
#define PERSONMODEL_H
#include <QAbstractListModel>
#include <QObject>
#include<QDebug>
#include<list>
#include<Person.h>

class PersonModel : public QAbstractListModel
{
     Q_OBJECT
public:
    PersonModel();
    int rowCount(const QModelIndex &index) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    void init();

    virtual QHash<int, QByteArray> roleNames() const;

private:
    QList<Person*>m_persons;
};

#endif // PERSONMODEL_H
