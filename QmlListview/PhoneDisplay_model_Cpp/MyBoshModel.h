#ifndef MYBOSHMODEL_H
#define MYBOSHMODEL_H
#include"MyPerson.h"
#include<QList>
#include<QTimer>
#include <QAbstractListModel>
#include<QDebug>

class MyBoshModel : public QAbstractListModel
{
    Q_OBJECT

public:
    explicit MyBoshModel(QObject *parent = 0);

    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
    int rowCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    Q_INVOKABLE void addData(QString name,QString phone,QString email);
public slots:
   void  insertData();

private:
    QList<MyPerson*>m_persons;

    // QAbstractItemModel interface
public:
    QHash<int, QByteArray> roleNames() const override;
};

#endif // MYBOSHMODEL_H
