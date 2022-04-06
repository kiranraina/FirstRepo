#include "Base.h"
list<Base*> Base::m_baselist;

Base::Base(Base *ptr=nullptr)
{
  cout<<"Base constructor called"<<endl;
  m_baselist.push_back(this);
  cout<<m_baselist.size()<<endl;
}
Base::~Base()
{
  cout<<"Base Destructor called"<<endl;
}

string Base::getName() const
{
     cout<<"Base getName called"<<endl;
    return name;
}

void Base::setName(const string value)
{
     cout<<"Base setName called"<<endl;
     name = value;
}

void Base::Print()
{
    cout<<"Base Print called"<<endl;
    for (it=m_baselist.begin();it!=m_baselist.end();it++) {
        cout<<(*it)->getName()<<endl;
    }
}

void Base::children(Base *ptr)
{
    cout<<"Base children called"<<endl;
    for (it=m_baselist.begin();it!=m_baselist.end();it++) {
        cout<<(*it)->getName()<<endl;
    }
}
