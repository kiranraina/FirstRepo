#include "WeatherModel.h"

WeatherModel::WeatherModel()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    init();
}

int WeatherModel::rowCount(const QModelIndex &index) const
{
   qDebug()<<Q_FUNC_INFO<<endl;
   return m_city.size();
}

QVariant WeatherModel::data(const QModelIndex &index, int role) const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    DetailsModel *cit=m_city.at(index.row());
//    switch (role) {
//    case 10:
//        return cit->cityName();
//        break;
//    default:
//        break;
//    }
    qDebug()<<Q_FUNC_INFO<<"index.row()="<<index.row()<<"Role"<<role<<endl;
    if(role==10)
        return cit->cityName();
//   return "hello";
}

QHash<int, QByteArray> WeatherModel::roleNames() const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    QHash<int, QByteArray> roles;
    roles[10]="city";
    return roles;
}



void WeatherModel::init()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    for(int i=0;i<10;i++)
    {
      DetailsModel *city=new DetailsModel;
      QString name= (i==0)?"Banglore":
                    (i==1)?"mysore":
                    (i==2)?"nagara":
                    (i==3)?"Manglore":
                    (i==4)?"RR Nagar":
                    (i==5)?"Majestic":
                    (i==6)?"Erode":
                    (i==7)?"Talavadi":
                    (i==8)?"Nayandhalli":
                    (i==9)?"vijaynagar":"KR Market";
      city->setCityName(name);
      this->m_city.append(city);
    }
}

DetailsModel *WeatherModel::getYou(int ind)
{

    qDebug()<<Q_FUNC_INFO<<endl;
    for (it=m_city.begin();it!=m_city.end();it++) {
       qDebug()<<"object in get you"<<*it<<Q_FUNC_INFO<<endl;
    }
    DetailsModel *DModel=m_city.at(ind);
    return DModel;
}




