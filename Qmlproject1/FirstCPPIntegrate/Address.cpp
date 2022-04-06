#include "Address.h"

Address::Address()
{
 qDebug()<<"Address constructor"<<endl;
}
Address::~Address()
{
qDebug()<<"Address destructor"<<endl;
}
Address::Address(QString p, QString st, QString pn){
    this->m_plotNo=p;
    this->m_street=st;
    this->m_pin=pn;
}
