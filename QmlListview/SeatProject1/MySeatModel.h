#ifndef MYSEATMODEL_H
#define MYSEATMODEL_H
#include <QAbstractListModel>
#include <QObject>
#include<QDebug>
#include<list>
#include<MySeat.h>
class MySeatModel : public QAbstractListModel
{
public:
    MySeatModel();
    int rowCount(const QModelIndex &index) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    void init();
    virtual QHash<int, QByteArray> roleNames() const;
private:
    QList<MySeat*>m_seats;
};

#endif // MYSEATMODEL_H
