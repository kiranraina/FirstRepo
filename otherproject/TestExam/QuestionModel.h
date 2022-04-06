#ifndef QUESTIONMODEL_H
#define QUESTIONMODEL_H

#include <QAbstractListModel>
#include <QObject>
#include <QList>
#include <QDebug>
#include <Question.h>

class QuestionModel : public QAbstractListModel
{
    Q_OBJECT
    Q_PROPERTY(int count MEMBER m_count CONSTANT);
    Q_PROPERTY(int right READ rightAns CONSTANT);
    Q_PROPERTY(int wrong READ wrngAns CONSTANT);
public:
    explicit QuestionModel(QObject *parent = nullptr);
    int rowCount(const QModelIndex &index) const override;
    QVariant data(const QModelIndex &index, int role) const override;
    virtual QHash<int,QByteArray> roleNames() const override;

//    Q_INVOKABLE QString userAns(int index,QString str);
    Q_INVOKABLE void save(int idx,QString an){
        this->m_qpapers.at(idx);
    }
    Q_INVOKABLE Question* getQn(int index){
        return m_qpapers.at(index);
    }
    Q_INVOKABLE void Summary();

    int rightAns() const;
    void setRightAns(int newRightAns);

    int wrngAns() const;
    void setWrngAns(int newWrngAns);

    int count() const;
    void setCount(int newCount);

private:
    void init();
    QList<Question*> m_qpapers;
    Question *qpapers;
    int m_rightAns;
    int m_wrngAns;
    int m_count;
};

#endif // QUESTIONMODEL_H
