#include "DetailsModel.h"

DetailsModel::DetailsModel()
{
    qDebug()<<Q_FUNC_INFO<<endl;
    init();
}
int DetailsModel::rowCount(const QModelIndex &index) const
{
   qDebug()<<Q_FUNC_INFO<<endl;
   return m_temperature.size();
}

QVariant DetailsModel::data(const QModelIndex &index, int role) const
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
    case 14:
         return tmpt->getImage();
        break;
    default:
        break;
    }
    qDebug()<<Q_FUNC_INFO<<"index.row()="<<index.row()<<"Role"<<role<<endl;
   return "hello";
}

QHash<int, QByteArray> DetailsModel::roleNames() const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    QHash<int, QByteArray> roles;
    roles.insert(11,"index");
    roles[12]="temperature";
    roles.insert(13,"time");
    roles.insert(14,"image");
    return roles;
}

void DetailsModel::init()
{
    qDebug()<<Q_FUNC_INFO<<endl;
      for(int j=0;j<24;j++)
      {
          Temperature *temp=new Temperature;
          temp->setId(j);     
          temp->setTime(QString::number(j+1)+":00");
          int tempt=(j<6)?16:(j<12)?20:(j<18)?28:(j<24)?38:42;
          temp->setTempature(tempt);
           QString img=(j<6)?"qrc:/rainy.jpeg":(j<12)?"qrc:/sunny.jpeg":(j<18)?"qrc:/sunset.jpeg":(j<24)?"qrc:/cloudy.jpeg":"";
          temp->setImage(img);
          this->m_temperature.append(temp);
      }
}

QString DetailsModel::cityName() const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    return m_cityName;
}

void DetailsModel::setCityName(const QString cityName)
{
    qDebug()<<Q_FUNC_INFO<<endl;

    m_cityName=cityName;
}

int DetailsModel::temp() const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    return m_temp;
}

void DetailsModel::setTemp(int temp)
{

qDebug()<<Q_FUNC_INFO<<endl;
    m_temp = temp;
}




