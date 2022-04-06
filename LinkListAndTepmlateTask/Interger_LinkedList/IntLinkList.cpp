#include "IntLinkList.h"

IntLinkList::IntLinkList()
{
cout<<"IntLinkList constructor called "<<endl;
m_p=nullptr;
}
IntLinkList::~IntLinkList()
{
    cout<<"IntLinkList destructor called "<<endl;
}

void IntLinkList::append(Node **q, int num)
{
    cout<<"IntLinkList append called "<<endl;
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

void IntLinkList::addatbeg(Node **q, int num)
{
     cout<<"IntLinkList addatbeg called "<<endl;
     struct Node *temp;
     temp=new Node;
     temp->data=num;
     temp->link=*q;
     *q=temp;
}

bool IntLinkList::addafter(Node *q, int loc, int num)
{
     cout<<"IntLinkList addafter called "<<endl;
      struct Node *temp,*r;
      int i;
      temp=q;
      for(i=0;i<loc;i++){
          temp=temp->link;
          if(temp==nullptr){
              cout<<"There are less than elements in list"<<loc<<endl;
              return false;
          }
      }
      r=new Node;
      r->data=num;
      r->link=temp->link;
      temp->link=r;
      return true;
}

bool IntLinkList::Delete(Node **q, int num)
{
    cout<<"IntLinkList Delete called "<<endl;
    struct Node *old,*temp;
    temp=*q;
    while(temp!=nullptr){
        if(temp->data==num){
            if(temp==*q)
            {
            *q=temp->link;
            free(temp);
            return true;
            }

        else
        {
            old->link=temp->link;
            free(temp);
            return true;
        }
    }
    else
    {
        old=temp;
        temp=temp->link;
    }
    }
    cout<<"Element not found"<<num<<endl;
}

void IntLinkList::display(Node *q)
{
     cout<<"IntLinkList display called "<<endl;
     while (q!=nullptr) {
         cout<<q->data<<endl;
         q=q->link;
     }
}

int IntLinkList::count(Node *q)
{
    cout<<"IntLinkList count called "<<endl;
    int c=0;
    while(q!=nullptr)
    {
        q=q->link;
        c++;
    }
    return c;
}


void  IntLinkList::init()
{
    cout<<"IntLinkList init called "<<endl;
    cout<<"No of elements in thelinkedlist"<<count(m_p)<<endl;
//    int x;
//      cout<<"Enter the insert value"<<endl;
//      cin>>x;
//    for(int i=0;i<5;i++){
//       append(&m_p,x);
//    }
    append(&m_p,1);
    append(&m_p,2);
    append(&m_p,3);
    append(&m_p,4);
    append(&m_p,5);


    display(m_p);
     cout<<"No of elements in thelinkedlist after append"<<count(m_p)<<endl;


    addatbeg(&m_p,999);
    addatbeg(&m_p,888);
    addatbeg(&m_p,777);

    display(m_p);
    cout<<"No of elements in thelinkedlist after addatbegning"<<count(m_p)<<endl;

    addafter(m_p,7,0);
    addafter(m_p,2,1);
    addafter(m_p,1,99);


    display(m_p);
    cout<<"No of elements in thelinkedlist after addatbegning"<<count(m_p)<<endl;

    Delete(&m_p,888);
    Delete(&m_p,1);
    Delete(&m_p,10);


    display(m_p);
    cout<<"No of elements in thelinkedlist after addatbegning"<<count(m_p)<<endl;

}
