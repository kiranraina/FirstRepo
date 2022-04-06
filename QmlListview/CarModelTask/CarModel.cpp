#include "CarModel.h"

CarModel::CarModel(QObject *parent) : QObject(parent)
{
    qDebug()<<Q_FUNC_INFO<<endl;
}

CarModel::~CarModel()
{
    qDebug()<<Q_FUNC_INFO<<endl;
}

Car* CarModel::getFunction(int x)
{
    qDebug()<<Q_FUNC_INFO<<endl;
    std::list<Car*>::iterator it=m_carlist.begin();
    std::list<Car*>::iterator it2=std::next(it,x);
    Car* car=*it2;
    return car;

}
void CarModel::init(){
    for(int i=0;i<10;i++){
        Car *cars=new Car;
//        QString carName="Maruthi"+QString::number(i);

     cars->setName("audi"+QString::number(i));
     cars->setColor("red");
     cars->setNumber("audi001"+QString::number(i));
     m_carlist.push_back(cars);
  }
}
//void CarModel::init(Car *ptr)
//{
//     qDebug()<<Q_FUNC_INFO<<endl;
//     m_carlist.push_back(ptr);
//}

void CarModel::print()
{
    foreach (Car *cars, m_carlist) {
        qDebug()<<cars->getname()<<endl;
    }
}

