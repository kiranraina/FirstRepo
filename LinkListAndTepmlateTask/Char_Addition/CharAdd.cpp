#include "CharAdd.h"

CharAdd::CharAdd()
{
 cout<<"CharAdd costructor called"<<endl;
this->Addition();
}
//CharAdd::CharAdd(char a[],char b[])/*:m_first(a),
//                                m_second(b)*/
//{
// cout<<"CharAdd parameter costructor called"<<endl;
// cout<<"Addition of numbers "<<a<<endl;
//// this->Addition(a,b);
//}
CharAdd::~CharAdd()
{
 cout<<"CharAdd destructor called"<<endl;
}
void CharAdd::Addition()
{
     cout<<"CharAdd Addition called"<<endl;
     cout<<"array char 1"<<endl;
     cin>>m_first;
     cout<<"array char 2"<<endl;
     cin>>m_second;
     strcat(m_first ,m_second);
      cout<<"addition of numbers "<<m_first<<endl;
}
