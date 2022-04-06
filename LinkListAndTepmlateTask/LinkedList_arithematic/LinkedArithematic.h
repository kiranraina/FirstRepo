#ifndef LINKEDARITHEMATIC_H
#define LINKEDARITHEMATIC_H
#include<iostream>
using namespace std;
template<typename sarath>
struct Node
{
    sarath data;
    struct Node<sarath> *link;
};
//void append(struct Node<sarath>,float);
//void display(struct Node<sarath>);

template<typename sarath>
class LinkedArithematic
{
public:
    LinkedArithematic();
    ~LinkedArithematic();
    void append(struct Node<sarath> **q, sarath num);
    void display(struct Node<sarath> *q);
     void init();
  private:
//    struct Node<sarath>*m_p;
};
template<typename sarath>
LinkedArithematic<sarath>::LinkedArithematic()
{
   cout<<"LinkedArithematic constructor called "<<endl;
//   m_p=nullptr;
//   init();
}

template<typename sarath>
LinkedArithematic<sarath>::~LinkedArithematic()
{
   cout<<"LinkedArithematic destructor called "<<endl;
}

template<typename sarath>
void LinkedArithematic<sarath>::append(Node<sarath> **q, sarath num)
{
    cout<<"LinkedArithematic append called "<<endl;
    struct Node<sarath> *temp,*r;
    temp=*q;
    if(*q==nullptr){
        temp=new Node<sarath>;
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
        r=new Node<sarath>;
        r->data=num;
        r->link=nullptr;
        temp->link=r;
    }

}

template<typename sarath>
void LinkedArithematic<sarath>::display(Node<sarath> *q)
{
     cout<<"LinkedArithematic display called "<<endl;
     while (q!=nullptr) {
         cout<<q->data<<endl;
         q=q->link;
     }
}

template<typename sarath>
void LinkedArithematic<sarath>::init()
{
     cout<<"LinkedArithematic init called "<<endl;
//     append(&m_p,1.5);
//     append(&m_p,2.5);

//     display(m_p);
}

#endif // LINKEDARITHEMATIC_H
