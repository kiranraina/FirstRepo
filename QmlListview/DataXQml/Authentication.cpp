#include "Authentication.h"

Authentication::Authentication(QObject *parent) : QObject(parent)
{
    qDebug()<<Q_FUNC_INFO<<endl;
}

void Authentication::dispaly()
{
     qDebug()<<Q_FUNC_INFO<<endl;
}

void Authentication::verify(QString u, QString p)
{
     qDebug()<<Q_FUNC_INFO<<"U="<<u<<endl;
     qDebug()<<Q_FUNC_INFO<<"P="<<p<<endl;
     if(u.compare("kiran")==0){
         qDebug()<<"inside if condition"<<endl;
         emit success();
         this->setProperty("LoginStatus","success");
     }
     else
     {
         emit fail();
            this->setProperty("LoginStatus","fail");
     }

}

int Authentication::value() const
{
    qDebug()<<Q_FUNC_INFO<<endl;
    return m_value;
}

void Authentication::setValue(int value)
{
    qDebug()<<Q_FUNC_INFO<<endl;
    m_value = value;
}
