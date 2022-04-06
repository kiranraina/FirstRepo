#ifndef BASE_H
#define BASE_H
#include<iostream>
#include<list>
using namespace std;

class Base
{
public:
    Base(Base *ptr=nullptr);
    ~ Base();
    string getName() const;
    void setName(const string value);
    void Print();
    void children(Base *ptr);

private:
    static list<Base*> m_baselist;
     list<Base*>::iterator it;
      list<Base*>::iterator it2;

    string name;
};

#endif // BASE_H
