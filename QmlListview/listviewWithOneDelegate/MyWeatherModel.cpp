#include "MyWeatherModel.h"

MyWeatherModel::MyWeatherModel()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    init();
}

int MyWeatherModel::rowCount(const QModelIndex &index) const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    return m_weather.size();
}

QVariant MyWeatherModel::data(const QModelIndex &index, int role) const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    MyWeather *tmpt=m_weather.at(index.row());
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
    case 14:
         return tmpt->image();
        break;
    default:
        break;
    }
    qDebug()<<Q_FUNC_INFO<<"index.row()="<<index.row()<<"Role"<<role<<endl;
   return "hello";
}

QHash<int, QByteArray> MyWeatherModel::roleNames() const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    QHash<int, QByteArray> roles;
    roles.insert(11,"index");
    roles[12]="temperature";
    roles.insert(13,"time");
    roles.insert(14,"image");
    return roles;
}

void MyWeatherModel::init()
{
    qDebug()<<Q_FUNC_INFO<<endl;
      for(int j=0;j<24;j++)
      {
          MyWeather *weather=new MyWeather;
          weather->setId(j);
          weather->setTime(QString::number(j+1)+":00");
          int tempt=(j<6)?16:(j<12)?20:(j<18)?28:(j<24)?38:42;
          weather->setTempature(tempt);
           QString img=(j<6)?"qrc:/rainy.jpeg":(j<12)?"qrc:/sunny.jpeg":(j<18)?"qrc:/sunset.jpeg":(j<24)?"qrc:/cloudy.jpeg":"";
          weather->setImage(img);
          this->m_weather.append(weather);
      }
}

MyWeather *MyWeatherModel::getTemp(int ind)
{
   qDebug()<<Q_FUNC_INFO<<endl;
   MyWeather *wea= m_weather.at(ind);
   return wea;
}

QString MyWeatherModel::getCityName() const
{
    return m_cityName;
}

void MyWeatherModel::setCityName(const QString &cityName)
{
    m_cityName = cityName;
}
