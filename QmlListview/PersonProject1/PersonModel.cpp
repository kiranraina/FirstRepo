#include "PersonModel.h"

PersonModel::PersonModel()
{
    qDebug()<<Q_FUNC_INFO<<endl;
  init();
}

int PersonModel::rowCount(const QModelIndex &index) const
{
    qDebug()<<Q_FUNC_INFO<<endl;
   return m_persons.size();
}

QVariant PersonModel::data(const QModelIndex &index, int role) const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    int row=index.row();
    Person *ti=m_persons.at(row);
    switch (role) {
    case 10:
        return ti->name();
        break;
    case 20:
         return ti->getAge();
        break;
    case 05:
        return ti->getGender();
        break;
    default:
        break;
}
    qDebug()<<Q_FUNC_INFO<<"Row="<<row<<"Role"<<role<<endl;
   return "hello";
}

void PersonModel::init()
{
    qDebug()<<Q_FUNC_INFO<<endl;
   for(int i=0;i<20;i++){
       Person *per=new Person;
       per->setName("raj"+QString::number(i));
       per->setAge(20+i);
       per->setGender("Male");
       this->m_persons.append(per);
   }
}

QHash<int, QByteArray> PersonModel::roleNames() const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    QHash<int, QByteArray> roles;
      roles[10]="name";
        roles[20]="age";
          roles[30]="gender";
           return roles;
}
