#include "MyCityModel.h"

MyCityModel::MyCityModel()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    init();
}

int MyCityModel::rowCount(const QModelIndex &index) const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    return m_city.size();
}

QVariant MyCityModel::data(const QModelIndex &index, int role) const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    MyWeatherModel *cit=m_city.at(index.row());
    switch (role) {
    case 10:
        return cit->getCityName();
        break;
    default:
        break;
    }
    qDebug()<<Q_FUNC_INFO<<"index.row()="<<index.row()<<"Role"<<role<<endl;
     return "hello";
}

QHash<int, QByteArray> MyCityModel::roleNames() const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    QHash<int, QByteArray> roles;
    roles[10]="city";
    return roles;
}

void MyCityModel::init()
{

    qDebug()<<Q_FUNC_INFO<<endl;
    for(int i=0;i<10;i++)
    {
      MyWeatherModel *city=new MyWeatherModel;
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

MyWeatherModel *MyCityModel::getYou(int ind)
{
    qDebug()<<Q_FUNC_INFO<<endl;
    for (it=m_city.begin();it!=m_city.end();it++) {
       qDebug()<<"object in get you"<<*it<<Q_FUNC_INFO<<endl;
    }
    MyWeatherModel *wModel=m_city.at(ind);
    return wModel;
}
