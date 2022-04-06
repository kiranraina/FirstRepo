#ifndef GENERICNUMBER_H
#define GENERICNUMBER_H
#include<iostream>
using namespace std;
template<typename kiran,typename kumar>

class Genericnumber
{
public:
    Genericnumber();
    ~Genericnumber();
    void print();
    void init();
    kiran Getx()const;
    void Setx(kiran x);
    void compare(kiran x,kumar y);
    kumar Gety()const;
    void Sety(kumar y);
private:
    kiran m_x;
    kumar m_y;
};
template<typename kiran,typename kumar>
Genericnumber<kiran,kumar>::Genericnumber()
{
    cout<<"Genericnumber constructor called"<<endl;
}

template<typename kiran,typename kumar>
Genericnumber<kiran,kumar>::~Genericnumber()
{
    cout<<"Genericnumber destructor called"<<endl;
}

template<typename kiran,typename kumar>
kiran Genericnumber<kiran,kumar>::Getx() const
{
    return m_x;
}

template<typename kiran,typename kumar>
void Genericnumber<kiran,kumar>::Setx(kiran x){
    m_x=x;
}

template<typename kiran, typename kumar>
void Genericnumber<kiran,kumar>::compare(kiran x, kumar y)
{
     cout<<"Genericnumber compare called"<<endl;
   m_x=x;
   m_y=y;

   m_x < m_y;
}

template<typename kiran,typename kumar>
kumar Genericnumber<kiran,kumar>::Gety() const
{
    return m_y;
}
template<typename kiran,typename kumar>
void Genericnumber<kiran,kumar>::Sety(kumar y){
    m_y=y;
}
template<typename kiran,typename kumar>
void Genericnumber<kiran,kumar>::init(){
    cout<<"Genericnumber init called"<<endl;
}
template<typename kiran,typename kumar>
void Genericnumber<kiran,kumar>::print(){
    cout<<"Genericnumber print called"<<endl;
}


#endif // GENERICNUMBER_H
