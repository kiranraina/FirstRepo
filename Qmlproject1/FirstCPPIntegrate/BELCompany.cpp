#include "BELCompany.h"

BELCompany::BELCompany(QObject *parent) : QObject(parent)
{
    qDebug()<<"BELCompany constructor"<<endl;
    Person *p1=new Person;
    p1->setName("Ashish");
//    p1->setEmail("ashish@gmail.com");
//    p1->setMobile("678887");
//    p1->setInsta("ashish001");
    Address *ad= new Address("bel","jalahalli","560098");
    p1->setAddress(ad);
    this->m_list.append(p1);

    p1= new Person;
    p1->setName("jyothi");
//    p1->setEmail("jyothi@gmail.com");
//    p1->setMobile("678887");
//    p1->setInsta("jyothi001");
    ad= new Address("dg","kengeri","568788");
    p1->setAddress(ad);
    this->m_list.append(p1);

    p1= new Person;
    p1->setName("name");
//    p1->setEmail("name@gmail.com");
//    p1->setMobile("678887");
//    p1->setInsta("name001");
    ad= new Address("xyz","rr nagar","575488");
    p1->setAddress(ad);
    this->m_list.append(p1);

}
BELCompany::~BELCompany(){
      qDebug()<<"BELCompany constructor"<<endl;
}
QString BELCompany::name()const
{
    qDebug()<<Q_FUNC_INFO<<m_name<<endl;
    return m_name;
}
void BELCompany::setName(const QString &name){
    m_name=name;
    emit unameChanged();
    qDebug()<<Q_FUNC_INFO<<m_name<<endl;

}
void BELCompany::printMe(){
    qDebug()<<Q_FUNC_INFO<<endl;
}
bool BELCompany::verify(QString u, QString p){

    qDebug()<<Q_FUNC_INFO<<"U="<<u<<"P="<<p<<endl;
    if(u.compare("hello")==0){
        emit success();
        emit send("bel",1000);
    }else{
        emit fail();
        return false;
    }
    return true;
}
Person *BELCompany::get(int i)
{
    Person *p=m_list.at(i);
    if(p==nullptr)
    {
    qDebug()<<"Is is null ptr"<<endl;
    }
        return m_list.at(i);
}
int BELCompany::count()
{
    return m_list.count();
}

