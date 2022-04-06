#include "DetailsModels.h"

DetailsModels::DetailsModels()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    init();
}

int DetailsModels::rowCount(const QModelIndex &index) const
{
   qDebug()<<Q_FUNC_INFO<<endl;
   return m_temperature.size();
}

QVariant DetailsModels::data(const QModelIndex &index, int role) const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    Temperature *tmpt=m_temperature.at(index.row());
    switch (role) {
    case 12:
         return tmpt->getTempature();
        break;
    case 13:
         return tmpt->time();
        break;
    case 11:
         return tmpt->id();
        break;
    default:
        break;
    }
    qDebug()<<Q_FUNC_INFO<<"index.row()="<<index.row()<<"Role"<<role<<endl;
   return "hello";
}

QHash<int, QByteArray> DetailsModels::roleNames() const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    QHash<int, QByteArray> roles;
    roles.insert(11,"index");
    roles[12]="temperature";
    roles.insert(13,"time");
    return roles;
}

void DetailsModels::init()
{
    qDebug()<<Q_FUNC_INFO<<endl;
      for(int j=0;j<24;j++)
      {
          Temperature *temp=new Temperature;
          temp->setId(j);
          if(j<=12){
          temp->setTime(QString::number(j+1)+":00am");
          }else{
           temp->setTime(QString::number(j+1)+":00pm");
          }
          temp->setTempature(j);
          this->m_temperature.append(temp);
      }
}
QString DetailsModels::cityName() const
{
    return m_cityName;
}

void DetailsModels::setCityName(const QString cityName)
{
    m_cityName = cityName;
}
