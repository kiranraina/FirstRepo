#include "PersonModel.h"

PersonModel::PersonModel()
{
  qDebug()<<Q_FUNC_INFO<<endl;
  init();
}

int PersonModel::getIndex()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    return m_persons.size();
}

Person *PersonModel::getData(int index)
{
    qDebug()<<Q_FUNC_INFO<<"Recived value : "<<index<<endl;
    for(it=m_persons.begin();it!=m_persons.end();it++){
        if((*it)->getCount()==index){

            break;

        }

    }
    return (*it);
}


void PersonModel::init(){
     qDebug()<<Q_FUNC_INFO<<endl;
     for(int i=0;i<20;i++){
         Person *per=new Person;
         per->setName("raj"+QString::number(i));
         per->setAge(20+i);
         per->setGender("Male");
         per->setCount(i);
         this->m_persons.append(per);
     }
}

void PersonModel::test()
{
    qDebug()<<Q_FUNC_INFO<<endl;

}
