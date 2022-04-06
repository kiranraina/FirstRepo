#include "CarModels.h"

CarModels::CarModels()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    init();
}

QString CarModels::getImage(int index)
{
//    for(it=m_car.begin();it!=m_car.end();it++)
//    {
//        if((*it)->id()==index){
//            return (*it)->image();
//            break;
//        }

//    }
//    return "0";
    Car *ca=m_car.at(index);
    return ca->image();
}

int CarModels::rowCount(const QModelIndex &index) const
{
   qDebug()<<Q_FUNC_INFO<<endl;
    return m_car.size();
}

QVariant CarModels::data(const QModelIndex &index, int role) const
{
   qDebug()<<Q_FUNC_INFO<<endl;
   int row=index.row();
   Car *cars=m_car.at(row);
   switch (role) {
   case 10:
       return cars->carModel();
       break;
   case 12:
        return cars->image();
       break;
   case 03:
        return cars->id();
       break;
   default:
       break;
   }
   qDebug()<<Q_FUNC_INFO<<"Row="<<row<<"Role"<<role<<endl;
  return "hello";
}

QHash<int, QByteArray> CarModels::roleNames() const
{
   qDebug()<<Q_FUNC_INFO<<endl;
   QHash<int, QByteArray> roles;
   roles[10]="carModel";
   roles.insert(12,"image");
   roles[03]="id";
   return roles;
}

void CarModels::init()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    for(int i=0;i<100;i++){
         Car *car=new Car;
          car->setCarModel("Maruthi"+QString::number(i));
          car->setImage("qrc:/car2.jpeg");
          car->setId(i);
          this->m_car.append(car);
    }
}
