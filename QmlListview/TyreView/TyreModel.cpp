#include "TyreModel.h"

TyreModel::TyreModel()
{
    qDebug()<<Q_FUNC_INFO<<endl;
  init();
}

int TyreModel::rowCount(const QModelIndex &index) const
{
     qDebug()<<Q_FUNC_INFO<<endl;
    return m_tyre.size();
}

QVariant TyreModel::data(const QModelIndex &index, int role) const
{
    int row=index.row();
    MyTyre *ti=m_tyre.at(row);
    switch (role) {
    case 10:
        return ti->tireNumber();
        break;
    case 30:
         return ti->tireName();
        break;
    case 05:
        return ti->col();
        break;
    case 20:
        return ti->image();
        break;
    case 25:
        return ti->pressure();
        break;
    case 12:
        return ti->width();
        break;
    default:
        break;
    }
     qDebug()<<Q_FUNC_INFO<<"Row="<<row<<"Role"<<role<<endl;
    return "abhi";
}

void TyreModel::init()
{
     qDebug()<<Q_FUNC_INFO<<endl;
    for(int i=0;i<20;i++){
         MyTyre *m_tyres=new MyTyre;
        m_tyres->setCol((i*10,i*15,i*4));
        m_tyres->setPressure(20+i);
        m_tyres->setRadius(2+i);
        m_tyres->setTireName("MRF");
        m_tyres->setWidth(200+i);
        m_tyres->setTireNumber(20+i);
        m_tyres->setImage("qrc:/tyre3.png");
        this->m_tyre.append(m_tyres);
    }
}

QHash<int, QByteArray> TyreModel::roleNames() const
{
  qDebug()<<Q_FUNC_INFO<<endl;
  QHash<int, QByteArray> roles;
  roles[10]="tireNumber";
  roles.insert(12,"width");
  roles[03]="radius";
  roles[05]="colo";
  roles[20]="image";
  roles[25]="pressure";
  roles[30]="tyrename";
  return roles;
}
