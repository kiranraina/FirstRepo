#include "FloatLink.h"

FloatLink::FloatLink()
{
   cout<<"FloatLink constructor called "<<endl;
   m_p=nullptr;
   init();
}
FloatLink::~FloatLink()
{
   cout<<"FloatLink destructor called "<<endl;
}

void FloatLink::append(Node **q, float num)
{
    cout<<"FloatLink append called "<<endl;
    struct Node *temp,*r;
    temp=*q;
    if(*q==nullptr){
        temp=new Node;
        temp->data=num;
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
        r->data=num;
        r->link=nullptr;
        temp->link=r;
    }

}
void FloatLink::display(Node *q)
{
     cout<<"FloatLink display called "<<endl;
     while (q!=nullptr) {
         cout<<q->data<<endl;
         q=q->link;
     }
}

void FloatLink::init()
{
     cout<<"FloatLink init called "<<endl;
     append(&m_p,1.5);
     append(&m_p,2.5);

     display(m_p);
}

