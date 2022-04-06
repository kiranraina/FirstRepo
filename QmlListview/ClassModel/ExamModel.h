#ifndef EXAMMODEL_H
#define EXAMMODEL_H

#include <QAbstractListModel>

class ExamModel : public QAbstractListModel
{
    Q_OBJECT

public:
    explicit ExamModel(QObject *parent = 0);

    // Header:
    QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

    // Basic functionality:
    int rowCount(const QModelIndex &index) const override;

    QVariant data(const QModelIndex &index, int role) const override;
virtual QHash<int, QByteArray> roleNames() const;
private:
};

#endif // EXAMMODEL_H
