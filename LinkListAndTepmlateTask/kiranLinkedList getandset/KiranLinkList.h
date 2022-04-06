#ifndef KIRANLINKLIST_H
#define KIRANLINKLIST_H
#include<iostream>
using namespace std;
template<typename T>
class  Node
{
public:
     void print();
     template<typename z>friend class KiranLinkList;
private:
     T m_x;
    Node<T> *m_nextAdd;

};
template<typename T>
void Node<T>::print(){
     cout<<"Node print called"<<endl;
    m_x.print();
}


template<typename T>
class KiranLinkList{
public:
    KiranLinkList();
    bool Add(T arg);
    int length();
    bool AddTop(T arg);
    bool AddEnd(T arg);
    bool RemoveTop();
    bool RemoveEnd();
    bool print();
    bool insert(T arg,int pos);

    bool Add(T *arg);
//    int length();
    bool AddTop(T *arg);
    bool AddEnd(T *arg);
    bool RemoveTop1();
    bool RemoveEnd1();
//    bool print();
    bool insert(T *arg,int pos);

private:
    Node<T>*m_head;
};
template<typename T>
KiranLinkList<T>::KiranLinkList(){
    cout<<"KiranLinkList constructor called"<<endl;
    m_head=nullptr;
}
template<typename T>
bool KiranLinkList<T>::Add(T arg){
     cout<<"KiranLinkList adding data"<<endl;
      Node<T> *temp,*r;
     if(m_head==nullptr){
         cout<<"First Node"<<endl;
         temp=new Node<T>;
         temp->m_x=arg;
         temp->m_nextAdd=nullptr;
         m_head=temp;
         return true;
     }
     else
     {
         temp=m_head;
         while(temp->m_nextAdd!=nullptr){
             temp=temp->m_nextAdd;
         }
         r=new Node<T>;
         r->m_x=arg;
         r->m_nextAdd=nullptr;
         temp->m_nextAdd=r;
       cout<<"adding the node complete"<<endl;
       return true;
     }

}

template<typename T>
int KiranLinkList<T>::length()
{
    cout<<"KiranLinkList length data"<<endl;
    Node<T> *q;
    q=m_head;
    int len=0;
    while(q!=nullptr){
        q=q->m_nextAdd;
        len++;
    }
    cout<<len<<endl;
    return len;
}

template<typename T>
bool KiranLinkList<T>::AddTop( T arg)
{
     cout<<"KiranLinkList addTop data"<<endl;
    Node<T> *temp;
    temp=new Node<T>;
    temp->m_x=arg;
    temp->m_nextAdd=m_head;
    m_head=temp;
    return true;
}

template<typename T>
bool KiranLinkList<T>::AddEnd( T arg)
{
     cout<<"KiranLinkList AddEnd data"<<endl;
     this->Add(arg);
    return true;
}

template<typename T>
bool KiranLinkList<T>::RemoveTop()

{
    cout<<"KiranLinkList RemoveTop data"<<endl;
    Node<T> *temp;
    temp=m_head;
    while (temp!=nullptr) {
                m_head=temp->m_nextAdd;
                delete temp;
                return true;
            }
    cout<<"empty linkedlist"<<endl;
        }

template<typename T>
bool KiranLinkList<T>::RemoveEnd()
{
    cout<<"KiranLinkList RemoveEnd data"<<endl;
     Node<T> *old,*temp;
     temp=m_head;
     while (temp->m_nextAdd!=nullptr) {
         old=temp;
         temp=temp->m_nextAdd;
     }
     if(temp->m_nextAdd==nullptr){
         delete temp;
         old->m_nextAdd=nullptr;
          cout<<"object deleted success"<<endl;
     }
     cout<<"Element not found"<<endl;
}

template<typename T>
bool KiranLinkList<T>::print()
{
    Node<T> *q;
    q=m_head;
    cout<<"KiranLinkList print data"<<endl;
    while (q!=nullptr) {
        q->m_x.print();
        q=q->m_nextAdd;
    }
    return true;
}

template<typename T>
bool KiranLinkList<T>::insert( T arg, int pos)
{
     cout<<"KiranLinkList insert between link data"<<endl;
     Node<T> *temp,*r;   //t -> student
     int i;
     m_head->m_x.print();
     temp=m_head;
     for(i=1;i<pos;i++){
         cout<<"******************"<<pos<<endl;
         cout<<"temp before: "<<temp<<endl;
         cout<<"Address of obj : "<<temp->m_nextAdd<<endl;
         temp=temp->m_nextAdd;
         cout<<"temp after: "<<temp<<endl;
         if(temp==NULL){
             cout<<"There are less than elements in list"<<pos<<endl;
             return false;
         }
     }
     r=new Node<T>;
     r->m_x=arg;
     r->m_nextAdd=temp->m_nextAdd;
     cout<<"remp :: "<<temp<<endl;
     cout<<"inserted node : "<<r->m_nextAdd<<endl;
     temp->m_nextAdd=r;
     return true;
}

template<typename T>
bool KiranLinkList<T>::Add(T *arg)
{
    cout<<"KiranLinkList Add dynamic data"<<endl;
    Node<T> *temp,*r;
   if(m_head==nullptr){
       cout<<"First Node"<<endl;
       temp=new Node<T>;
       temp->m_x=*arg;
       temp->m_nextAdd=nullptr;
       m_head=temp;
       return true;
   }
   else
   {
       temp=m_head;
       while(temp->m_nextAdd!=nullptr){
           temp=temp->m_nextAdd;
       }
       r=new Node<T>;
       r->m_x=*arg;
       r->m_nextAdd=nullptr;
       temp->m_nextAdd=r;
     cout<<"adding the node complete"<<endl;
     return true;
   }

}

template<typename T>
bool KiranLinkList<T>::AddTop(T *arg)
{
    cout<<"KiranLinkList AddTop dynamic data"<<endl;
    Node<T> *temp;
    temp=new Node<T>;
    temp->m_x=*arg;
    temp->m_nextAdd=m_head;
    m_head=temp;
    return true;
}

template<typename T>
bool KiranLinkList<T>::AddEnd(T *arg)
{
    cout<<"KiranLinkList AddEnd dynamic data"<<endl;
    this->Add(*arg);
}

template<typename T>
bool KiranLinkList<T>::RemoveTop1()
{
    cout<<"KiranLinkList RemoveTop dynamic data"<<endl;
     Node<T>*temp;
     temp=m_head;
     while (temp!=nullptr) {
                 m_head=temp->m_nextAdd;
                 delete temp;
                 return true;
     }
  cout<<"empty linkedlist"<<endl;
  return true;
}

template<typename T>
bool KiranLinkList<T>::RemoveEnd1()
{
    cout<<"KiranLinkList RemoveEnd dynamic data"<<endl;
    Node<T> *old,*temp;
        temp=m_head;
        while (temp->m_nextAdd!=nullptr) {
            old=temp;
            temp=temp->m_nextAdd;
        }
        if(temp->m_nextAdd==nullptr){
            delete temp;
            old->m_nextAdd=nullptr;
             cout<<"object deleted success"<<endl;
              return true;
        }
        cout<<"Element not found"<<endl;
        return true;
}

template<typename T>
bool KiranLinkList<T>::insert(T *arg, int pos)
{
    cout<<"KiranLinkList insert dynamic data"<<endl;
    Node<T> *temp,*r;
    int i;
    temp=m_head;
    for(i=0;i<pos;i++){
        temp=temp->m_nextAdd;
        cout<<"...................................................."<<endl;
        if(temp==nullptr){
            cout<<"There are less than elements in list"<<pos<<endl;
            return false;
        }
    }
    r=new Node<T>;
    r->m_x=*arg;
    r->m_nextAdd=temp->m_nextAdd;
    temp->m_nextAdd=r;
    return true;
}
#endif // KIRANLINKLIST_H
