#include "QuestionModel.h"

QuestionModel::QuestionModel()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    init();
}

//QString QuestionModel::getQuestion(int index)
//{
//    Question *qt=m_questions.at(index);
//    return (*qt).question();
//}

//QString QuestionModel::getOption1(int index)
//{
//    Question *qt1=m_questions.at(index);
//    return (*qt1).option1();
//}
//QString QuestionModel::getOption2(int index)
//{
//    Question *qt2=m_questions.at(index);
//    return (*qt2).option2();
//}
//QString QuestionModel::getOption3(int index)
//{
//    Question *qt3=m_questions.at(index);
//    return (*qt3).option3();
//}
//QString QuestionModel::getOption4(int index)
//{
//    Question *qt4=m_questions.at(index);
//    return (*qt4).option4();
//}

//void QuestionModel::setUserSelect(QString selected, int index)
//{
//     Question *qt6=m_questions.at(index);
//    (*qt6).setUserAnswer(selected);
//}


Question *QuestionModel::getObjectQuestion(int index)
{

    Question *qt=m_questions.at(index);
    return qt;
}

int QuestionModel::getCount()
{
    return m_questions.size();
}

void QuestionModel::setUserSelect(QString selected, int index)
{
     qDebug()<<Q_FUNC_INFO<<endl;
     Question *quest= m_questions.at(index);
     quest->setUserAnswer(selected);
}

void QuestionModel::summaryData()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    m_correctAns=0,m_wrongAns=0;
    for(it=m_questions.begin();it!=m_questions.end();it++){
        if((*it)->correctAnswer()==(*it)->userAnswer()){
            m_correctAns++;
        }else{
            m_wrongAns++;
        }

    }
    qDebug()<<"Correctans:"<<m_correctAns<<"WrongAns:"<<m_wrongAns <<endl;

}



int QuestionModel::rowCount(const QModelIndex &index) const
{
    qDebug()<<Q_FUNC_INFO<<endl;\
      return m_questions.size();
}

QVariant QuestionModel::data(const QModelIndex &index, int role) const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    int row=index.row();
    Question *quest=m_questions.at(row);
    switch (role) {
    case 10:
        return quest->question();
        break;
    case 12:
         return quest->option1();
        break;
    case 03:
         return quest->option2();
        break;
    case 20:
         return quest->option3();
        break;
    case 32:
         return quest->option4();
        break;
    default:
        break;
    }
    qDebug()<<Q_FUNC_INFO<<"Row="<<row<<"Role"<<role<<endl;
   return "hello";
}

QHash<int, QByteArray> QuestionModel::roleNames() const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    QHash<int, QByteArray> roles;
    roles[10]="questions";
    roles.insert(12,"option1");
    roles[03]="option2";
    roles.insert(20,"option3");
    roles.insert(32,"option4");
    return roles;
}

void QuestionModel::init()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    for(int i=0;i<8;i++){
        Question *ques=new Question;
        ques->setQuestion(QString::number(i+1)+".who invested computer?");
        ques->setOption1("charli");
        ques->setOption2("john");
        ques->setOption3("michale");
        ques->setOption4("richee");
        ques->setCorrectAnswer("michale");
        ques->setId(i);
        this->m_questions.append(ques);
    }
}

int QuestionModel::getCorrectAns() const
{
    return m_correctAns;
}

void QuestionModel::setCorrectAns(int correctAns)
{

    m_correctAns = correctAns;
}

int QuestionModel::getWrongAns() const
{
    return m_wrongAns;
}

void QuestionModel::setWrongAns(int wrongAns)
{
    m_wrongAns = wrongAns;
}

QString QuestionModel::getSubName() const
{
    return m_subName;
}

void QuestionModel::setSubName(const QString subName)
{
    m_subName = subName;
}

int QuestionModel::getId() const
{
    return m_id;
}

void QuestionModel::setId(int id)
{
    m_id = id;
}
