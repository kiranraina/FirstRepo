#ifndef TYREMODEL_H
#define TYREMODEL_H
#include <QAbstractListModel>
#include <QObject>
#include<QDebug>
#include<list>
#include<MyTyre.h>
class TyreModel : public QAbstractListModel
{
    Q_OBJECT
public:
    TyreModel();
    int rowCount(const QModelIndex &index) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    void init();

    virtual QHash<int, QByteArray> roleNames() const;

private:
    QList<MyTyre*>m_tyre;
//    MyTyre *m_tyres;
};

#endif // TYREMODEL_H
