#include "MyExamModel.h"

MyExamModel::MyExamModel()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    init();

}

QuestionModel *MyExamModel::getObjectSubject(int index)
{
    QuestionModel *qtModel=m_sublist.at(index);
    return qtModel;
}

int MyExamModel::rowCount(const QModelIndex &index) const
{
    qDebug()<<Q_FUNC_INFO<<endl;\
      return m_sublist.size();
}

QVariant MyExamModel::data(const QModelIndex &index, int role) const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    int row=index.row();
    QuestionModel *quest=m_sublist.at(row);
    switch (role) {
    case 10:
        return quest->getSubName();
        break;
    default:
        break;
    }
    qDebug()<<Q_FUNC_INFO<<"Row="<<row<<"Role"<<role<<endl;
   return "hello";
}

QHash<int, QByteArray> MyExamModel::roleNames() const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    QHash<int, QByteArray> roles;
    roles[10]="subject";
    roles[11]="Sindex";
    return roles;
}

void MyExamModel::init()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    for(int i=0;i<6;i++){
        QuestionModel *qModel=new QuestionModel;
        QString val = (i==0)?"Kannada":
                      (i==1)? "English":
                      (i==2)? "Math":
                      (i==3)? "Science":
                      (i==4)? "social":
                      (i==5)? "WWE":"no";
        qModel->setSubName(val);
        qModel->setId(i);
        this->m_sublist.append(qModel);
    }
}
