#ifndef QUESTIONMODEL_H
#define QUESTIONMODEL_H
#include<list>
#include<QDebug>
#include <QAbstractListModel>
#include <QObject>
#include <QString>
#include<Question.h>
class QuestionModel : public QAbstractListModel
{
    Q_OBJECT
public:
    QuestionModel();
    Q_PROPERTY(int correctAns READ getCorrectAns WRITE setCorrectAns NOTIFY setCorrectAnsChanged)
    Q_PROPERTY(int wrongAns READ getWrongAns WRITE setWrongAns NOTIFY setWrongAnsChanged)
    Q_INVOKABLE Question *getObjectQuestion(int index);
    Q_INVOKABLE int getCount();
    Q_INVOKABLE void setUserSelect(QString selected,int index);
    Q_INVOKABLE void summaryData();
    int rowCount(const QModelIndex &index) const override;
    QVariant data(const QModelIndex &index, int role)  const override;
    virtual QHash<int, QByteArray> roleNames() const;
    void init();
    int getCorrectAns() const;
    void setCorrectAns(int correctAns);

    int getWrongAns() const;
    void setWrongAns(int wrongAns);
signals:
    void setCorrectAnsChanged();
    void setWrongAnsChanged();
private:
    QList<Question*>m_questions;
    QList<Question*>::Iterator it;
    int m_correctAns,m_wrongAns;
};



#endif // QUESTIONMODEL_H
