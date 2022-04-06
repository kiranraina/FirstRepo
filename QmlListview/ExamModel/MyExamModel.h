#ifndef MYEXAMMODEL_H
#define MYEXAMMODEL_H
#include<list>
#include<QDebug>
#include <QAbstractListModel>
#include <QObject>
#include <QString>
#include<QuestionModel.h>
class MyExamModel : public QAbstractListModel
{
     Q_OBJECT
public:
    MyExamModel();
     Q_INVOKABLE QuestionModel *getObjectSubject(int index);
    int rowCount(const QModelIndex &index) const override;
    QVariant data(const QModelIndex &index, int role)  const override;
    virtual QHash<int, QByteArray> roleNames() const;
    void init();
private:
    QList<QuestionModel*>m_sublist;

};

#endif // MYEXAMMODEL_H
