#ifndef CUSTOMERLIST_H
#define CUSTOMERLIST_H
#include<iostream>
using namespace std;

template<typename T>
class Node
{
public:
     void print();
     template<typename z>friend class CustomerLIst;
//private:
     T *m_data;
    Node<T> *m_nextAdd;

};
template<typename T>
void Node<T>::print(){
     cout<<"Bank print called"<<endl;
    m_data.print();
}


template<typename T>
class CustomerLIst
{
public:
//    CustomerLIst();
//    bool Add(T arg);
    bool Add(T *arg);
//    bool AddTop(T arg);
//    bool AddEnd(T arg);
//    bool RemoveTop();
//    bool RemoveEnd();
    bool print();
//    int length();
//    bool insert(T arg,int pos);
    ~CustomerLIst();

    Node<T> *m_head;
};
//template<typename T>
//CustomerLIst<T>::CustomerLIst()
//{
//cout<<"CustomerLIst constructor called"<<endl;
// m_head=nullptr;
//}
template<typename T>
CustomerLIst<T>::~CustomerLIst()
{
    cout<<"CustomerLIst Destructor called"<<endl;
}
//template<typename T>
//bool CustomerLIst<T>::Add(T arg){
//     cout<<"PMSLL adding data"<<endl;
//      Node<T> *temp,*r;
//     if(m_head==nullptr){
//         cout<<"First Node"<<endl;
//         temp=new Node<T>;
//         temp->m_data=arg;
//         temp->m_nextAdd=nullptr;
//         m_head=temp;
//         return true;
//     }
//     else
//     {
//         temp=m_head;
//         while(temp->m_nextAdd!=nullptr){
//             temp=temp->m_nextAdd;
//         }
//         r=new Node<T>;
//         r->m_data=arg;
//         r->m_nextAdd=nullptr;
//         temp->m_nextAdd=r;
//       cout<<"adding the node complete"<<endl;
//       return true;
//     }

//}

//template<typename T>
//int PMSLL<T>::length()
//{
//    cout<<"PMSLL length data"<<endl;
//    Node<T> *q;
//    q=m_head;
//    int len=0;
//    while(q!=nullptr){
//        q=q->m_nextAdd;
//        len++;
//    }
//    cout<<len<<endl;
//    return len;
//}

//template<typename T>
//bool PMSLL<T>::AddTop( T arg)
//{
//     cout<<"PMSLL addTop data"<<endl;
//    Node<T> *temp;
//    temp=new Node<T>;
//    temp->m_x=arg;
//    temp->m_nextAdd=m_head;
//    m_head=temp;
//    return true;
//}

//template<typename T>
//bool PMSLL<T>::AddEnd( T arg)
//{
//     cout<<"PMSLL AddEnd data"<<endl;
//     this->Add(arg);
//    return true;
//}

//template<typename T>
//bool PMSLL<T>::RemoveTop()

//{
//    cout<<"PMSLL RemoveTop data"<<endl;
//    Node<T> *temp;
//    temp=m_head;
//    while (temp!=nullptr) {
//                m_head=temp->m_nextAdd;
//                delete temp;
//                return true;
//            }
//    cout<<"empty linkedlist"<<endl;
//        }

//template<typename T>
//bool PMSLL<T>::RemoveEnd()
//{
//    cout<<"PMSLL RemoveEnd data"<<endl;
//     Node<T> *old,*temp;
//     temp=m_head;
//     while (temp->m_nextAdd!=nullptr) {
//         old=temp;
//         temp=temp->m_nextAdd;
//     }
//     if(temp->m_nextAdd==nullptr){
//         delete temp;
//         old->m_nextAdd=nullptr;
//          cout<<"object deleted success"<<endl;
//     }
//     cout<<"Element not found"<<endl;
//}

template<typename T>
bool CustomerLIst<T>::print()
{
    Node<T> *q;
    q=m_head;
    cout<<"CustomerLIst print data"<<endl;
    while (q!=nullptr) {
        q->m_x.print();
        q=q->m_nextAdd;
    }
    return true;
}

//template<typename T>
//bool PMSLL<T>::insert( T arg, int pos)
//{
//     cout<<"PMSLL insert between link data"<<endl;
//     Node<T> *temp,*r;   //t -> student
//     int i;
//     m_head->m_x.print();
//     temp=m_head;
//     for(i=1;i<pos;i++){
//         cout<<"******************"<<pos<<endl;
//         cout<<"temp before: "<<temp<<endl;
//         cout<<"Address of obj : "<<temp->m_nextAdd<<endl;
//         temp=temp->m_nextAdd;
//         cout<<"temp after: "<<temp<<endl;
//         if(temp==NULL){
//             cout<<"There are less than elements in list"<<pos<<endl;
//             return false;
//         }
//     }
//     r=new Node<T>;
//     r->m_x=arg;
//     r->m_nextAdd=temp->m_nextAdd;
//     cout<<"remp :: "<<temp<<endl;
//     cout<<"inserted node : "<<r->m_nextAdd<<endl;
//     temp->m_nextAdd=r;
//     return true;
//}

template<typename T>
bool CustomerLIst<T>::Add(T *arg)
{
//    cout<<"Added customer to bank"<<endl;
    Node<T> *temp,*r;
   if(m_head==nullptr){
       cout<<"First cutomer added to bank"<<endl;
       temp=new Node<T>;
       temp->m_data=arg;
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
       r->m_data=arg;
       r->m_nextAdd=nullptr;
       temp->m_nextAdd=r;
   cout<<"Added customer to bank"<<endl;
     return true;
   }

}

//template<typename T>
//bool PMSLL<T>::AddTop(T *arg)
//{
//    cout<<"PMSLL AddTop dynamic data"<<endl;
//    Node<T> *temp;
//    temp=new Node<T>;
//    temp->m_x=*arg;
//    temp->m_nextAdd=m_head;
//    m_head=temp;
//    return true;
//}

//template<typename T>
//bool KiranLinkList<T>::AddEnd(T *arg)
//{
//    cout<<"KiranLinkList AddEnd dynamic data"<<endl;
//    this->Add(*arg);
//}

//template<typename T>
//bool KiranLinkList<T>::RemoveTop1()
//{
//    cout<<"KiranLinkList RemoveTop dynamic data"<<endl;
//     Node<T>*temp;
//     temp=m_head;
//     while (temp!=nullptr) {
//                 m_head=temp->m_nextAdd;
//                 delete temp;
//                 return true;
//     }
//  cout<<"empty linkedlist"<<endl;
//  return true;
//}

//template<typename T>
//bool PMSLL<T>::RemoveEnd1()
//{
//    cout<<"PMSLL RemoveEnd dynamic data"<<endl;
//    Node<T> *old,*temp;
//        temp=m_head;
//        while (temp->m_nextAdd!=nullptr) {
//            old=temp;
//            temp=temp->m_nextAdd;
//        }
//        if(temp->m_nextAdd==nullptr){
//            delete temp;
//            old->m_nextAdd=nullptr;
//             cout<<"object deleted success"<<endl;
//              return true;
//        }
//        cout<<"Element not found"<<endl;
//        return true;
//}

//template<typename T>
//bool PMSLL<T>::insert(T *arg, int pos)
//{
//    cout<<"PMSLL insert dynamic data"<<endl;
//    Node<T> *temp,*r;
//    int i;
//    temp=m_head;
//    for(i=0;i<pos;i++){
//        temp=temp->m_nextAdd;
//        cout<<"...................................................."<<endl;
//        if(temp==nullptr){
//            cout<<"There are less than elements in list"<<pos<<endl;
//            return false;
//        }
//    }
//    r=new Node<T>;
//    r->m_x=*arg;
//    r->m_nextAdd=temp->m_nextAdd;
//    temp->m_nextAdd=r;
//    return true;
//}

#endif // CUSTOMERLIST_H
