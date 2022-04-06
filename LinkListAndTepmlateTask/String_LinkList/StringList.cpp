#include "StringList.h"

StringList::StringList()
{
    cout<<"StringList constructor called "<<endl;
    m_p=nullptr;
    init();
}
StringList::~StringList()
{
   cout<<"StringList destructor called "<<endl;
}

void StringList::append(Node **q, string name)
{
    cout<<"StringList append called "<<endl;
    struct Node *temp,*r;
    temp=*q;
    if(*q==nullptr){
        temp=new Node;
        temp->data=name;
        temp->link=nullptr;
        *q=temp;
    }
    else
    {
        temp=*q;
        while (temp->link!=nullptr) {
            temp=temp->link;
        }
        r=new Node;
        r->data=name;
        r->link=nullptr;
        temp->link=r;
    }

}
void StringList::display(Node *q)
{
     cout<<"StringList display called "<<endl;
     while (q!=nullptr) {
         cout<<q->data<<endl;
         q=q->link;
     }
}
void StringList::init()
{
     cout<<"StringList init called "<<endl;
     append(&m_p,"john");
     append(&m_p,"kiran");

     display(m_p);
}


