#include "DoubleLinkList.h"

DoubleLinkList::DoubleLinkList()
{
    cout<<"DoubleLinkList constructor called "<<endl;
    m_p=nullptr;
    init();
}
DoubleLinkList::~DoubleLinkList()
{
   cout<<"DoubleLinkList destructor called "<<endl;
}

void DoubleLinkList::append(Node **q, double num)
{
    cout<<"DoubleLinkList append called "<<endl;
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
void DoubleLinkList::display(Node *q)
{
     cout<<"DoubleLinkList display called "<<endl;
     while (q!=nullptr) {
         cout<<q->data<<endl;
         q=q->link;
     }
}

void DoubleLinkList::init()
{
     cout<<"DoubleLinkList init called "<<endl;
     append(&m_p,1000.5000);
     append(&m_p,20000.100000);

     display(m_p);
}


