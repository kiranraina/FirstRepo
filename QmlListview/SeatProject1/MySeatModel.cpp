#include "MySeatModel.h"

MySeatModel::MySeatModel()
{
     qDebug()<<Q_FUNC_INFO<<endl;
     init();
}

int MySeatModel::rowCount(const QModelIndex &index) const
{
     qDebug()<<Q_FUNC_INFO<<endl;
      return m_seats.size();
}

QVariant MySeatModel::data(const QModelIndex &index, int role) const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    int row=index.row();
  MySeat *it=m_seats.at(row);
  switch (role) {
  case 04:
      return it->bolster();
      break;
  case 20:
       return it->image();
      break;
  case 25:
      return it->position();
      break;
  case 30:
      return it->shoulder();
      break;
  default:
      break;
  }
  qDebug()<<Q_FUNC_INFO<<"Row="<<row<<"Role"<<role<<endl;
 return "helo";
}

void MySeatModel::init()
{
     qDebug()<<Q_FUNC_INFO<<endl;
     for(int i=0;i<5;i++){
         MySeat *seat=new MySeat;
         seat->setBolster(i*10);
         seat->setPosition(i*1);
         seat->setShoulder(i+12);
         seat->setImage("qrc:/seat"+QString::number(i+1)+".png");
         this->m_seats.append(seat);
     }
}

QHash<int, QByteArray> MySeatModel::roleNames() const
{
     qDebug()<<Q_FUNC_INFO<<endl;
     QHash<int, QByteArray> roles;
     roles[05]="bolster";
     roles[20]="image";
     roles[25]="position";
     roles[30]="shoulder";
     return roles;
}
