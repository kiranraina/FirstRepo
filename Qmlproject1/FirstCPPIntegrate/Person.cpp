#include "Person.h"

Person::Person(QObject *parent) : QObject(parent)
{
 qDebug()<<"Person constructor"<<endl;
}
Person::~Person()
{
 qDebug()<<"Person destructor"<<endl;
}
QString Person::name()const
{
    qDebug()<<Q_FUNC_INFO<<m_name<<endl;
    return m_name;
}
void Person::setName(const QString &name){
    m_name=name;
    qDebug()<<Q_FUNC_INFO<<m_name<<endl;

}
QString Person::email()const
{
    qDebug()<<Q_FUNC_INFO<<m_email<<endl;
    return m_email;
}
void Person::setEmail(const QString &email){
    m_email=email;
    qDebug()<<Q_FUNC_INFO<<m_email<<endl;

}
QString Person::mobile()const
{
    qDebug()<<Q_FUNC_INFO<<m_mobile<<endl;
    return m_mobile;
}
void Person::setMobile(const QString &mobile){
    m_mobile=mobile;
    qDebug()<<Q_FUNC_INFO<<m_mobile<<endl;

}
QString Person::insta()const
{
    qDebug()<<Q_FUNC_INFO<<m_insta<<endl;
    return m_insta;
}
void Person::setInsta(const QString &insta){
    m_insta=insta;
    qDebug()<<Q_FUNC_INFO<<m_insta<<endl;

}
Address *Person::address()const{
    return m_address;
}
void Person::setAddress(Address *address){
    m_address=address;
}
