
#include "StudentList.h"

StudentList::StudentList()
{
    cout<<"StudentList constructor called "<<endl;
}
StudentList::~StudentList()
{
   cout<<"StudentList destructor called "<<endl;
}

void StudentList::append(Node **q, string name,string roll,int sem)
{
    cout<<"StringList append called "<<endl;
    struct Node *temp,*r;
    temp=*q;
    if(*q==nullptr){
        temp=new Node;
        temp->name=name;
        temp->Roll=roll;
        temp->sem=sem;
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
        r->name=name;
        r->Roll=roll;
        r->sem=sem;
        r->link=nullptr;
        temp->link=r;
    }

}
void StudentList::display(Node *q)
{
     cout<<"StudentList display called "<<endl;
     while (q!=nullptr) {
         cout<<q->name<<" "<<q->Roll<<" "<<q->sem<<endl;
         q=q->link;
     }
}
void StudentList::init()
{
     cout<<"StudentList init called "<<endl;
//     append(&m_p,"john","a12",5);
//     append(&m_p,"kiran","s11",6);
//     display(m_p);
}
