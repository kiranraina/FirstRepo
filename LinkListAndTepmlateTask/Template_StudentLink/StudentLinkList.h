#ifndef STUDENTLINKLIST_H
#define STUDENTLINKLIST_H
#include<iostream>
using namespace  std;
template<typename stu>
struct Node
{
    stu Data;
    struct Node<stu> *link;
};

template<typename stu>
class StudentLinkList
{
public:
    StudentLinkList();
    ~StudentLinkList();
    void append(struct Node<stu> **q,stu Data);
    void display(struct Node<stu> *q);
};
template<typename stu>
StudentLinkList<stu>::StudentLinkList()
{
    cout<<"StudentLinkList constructor called "<<endl;
}
template<typename stu>
StudentLinkList<stu>::~StudentLinkList()
{
   cout<<"StudentLinkList destructor called "<<endl;
}
template<typename stu>
void StudentLinkList<stu>::append(Node<stu> **q, stu Data)
{
    cout<<"StudentLinkList append called "<<endl;
    struct Node<stu> *temp,*r;
    temp=*q;
    if(*q==nullptr){
        temp=new Node<stu>;
        temp->Data=Data;
        temp->link=nullptr;
        *q=temp;
    }
    else
    {
        temp=*q;
        while (temp->link!=nullptr) {
            temp=temp->link;
        }
        r=new Node<stu>;
        r->Data=Data;
        r->link=nullptr;
        temp->link=r;
    }

}
template<typename stu>
void StudentLinkList<stu>::display(Node<stu> *q)
{
     cout<<"StudentLinkList display called "<<endl;
     struct Node<stu> *temp;
     temp=q;
     while (temp!=nullptr) {
//         cout<<q->name<<" "<<q->Roll<<" "<<q->sem<<endl;
         temp->Data.display();
         temp=temp->link;
     }
}



#endif // STUDENTLINKLIST_H
