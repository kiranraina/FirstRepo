#include "QuestionModel.h"

QuestionModel::QuestionModel(QObject *parent)
    : QAbstractListModel{parent}
{
    qDebug()<<Q_FUNC_INFO<<Qt::endl;
    init();
}

void QuestionModel::init()
{
    this->m_rightAns=0;
    this->m_wrngAns =0;
    m_count = 0;

    for(int i=1;i<=20;i++){
        QString qn = QString("Question_"+QString ::number(i));
        Question *mt = new Question;
        mt->setQuestions("Question_"+QString::number(i+1));
        mt->setOption1("A");
        mt->setOption2("B");
        mt->setOption3("C");
        mt->setOption4("D");

        if(i%2 ==0){
            mt->answer();
        }
        mt->userSelected();
        this->m_qpapers.append(mt);
    }
}
int QuestionModel::rowCount(const QModelIndex &index) const
{
    return m_qpapers.size();

}

QVariant QuestionModel::data(const QModelIndex &index, int role) const
{
    int row = index.row();
    Question *ti = m_qpapers.at(row);
    switch (role) {
    case 10:return ti->questions();break;
    case 12:return ti->answer();break;
    case 03:return ti->option1();break;
    case 01:return ti->option2();break;
    case 20:return ti->option3();break;
    case 18:return ti->option4();break;
    case 25:return ti->userSelected();break;
    }
    qDebug()<<Q_FUNC_INFO<<"Row="<<row<<"Role"<<role<<endl;
    return "hello";
}

QHash<int, QByteArray> QuestionModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[10] = "questions";
    roles[12] = "answer";
    roles[03] = "opt1";
    roles[01] = "opt2";
    roles[20] = "opt3";
    roles[18] = "opt4";
    roles[25] = "userSelected";
    return roles;
}


void QuestionModel::Summary()
{
    for(int i=0;i<m_qpapers.size();i++){
        Question *q = m_qpapers.at(i);
        if(q->answer().compare(q->userSelected())==0){
            this->m_rightAns++;}
        else {
            this->m_wrngAns++;
        }
    }
    qDebug()<<"Summary = "<<m_rightAns<<""<<m_wrngAns<<Qt::endl;
}

int QuestionModel::rightAns() const
{
    return m_rightAns;
}

void QuestionModel::setRightAns(int newRightAns)
{
    m_rightAns = newRightAns;
}

int QuestionModel::wrngAns() const
{
    return m_wrngAns;
}

void QuestionModel::setWrngAns(int newWrngAns)
{
    m_wrngAns = newWrngAns;
}

int QuestionModel::count() const
{
    return m_count;
}

void QuestionModel::setCount(int newCount)
{
    m_count = newCount;
}
