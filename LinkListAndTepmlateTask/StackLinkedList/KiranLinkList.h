#ifndef KIRANLINKLIST_H
#define KIRANLINKLIST_H
#include<iostream>
using namespace std;
template<typename T>
class  Node
{
public:
     void print();
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
    bool push(T arg);
    int length();
    bool pop();
    bool print();
//    bool AddEnd(T arg);
//    bool insert(T arg,int pos);

//    bool Add(T *arg);
//    int length();
//    bool AddTop(T *arg);
//    bool AddEnd(T *arg);
//    bool RemoveTop(T *arg);
//    bool RemoveEnd(T *arg);
//    bool print();
//    bool insert(T *arg,int pos);

private:
    Node<T>*m_head;
    int item;
};
template<typename T>
KiranLinkList<T>::KiranLinkList(){
    cout<<"KiranLinkList constructor called"<<endl;
    m_head=nullptr;
}
template<typename T>
bool KiranLinkList<T>::push(T arg){
     cout<<"KiranLinkList push data"<<endl;
      Node<T> *temp;
         temp=new Node<T>;
         temp->m_x=arg;
         temp->m_nextAdd=m_head;
         m_head=temp;
         return true;
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
bool KiranLinkList<T>::pop()
{
     cout<<"KiranLinkList pop data"<<endl;
    Node<T> *temp;
     temp=m_head;
    if(temp==nullptr){
       cout<<"stack is empty"<<endl;
       return true;
    }
    else
    {
        m_head=temp->m_nextAdd;
        delete(temp);
        cout<<"deleted object"<<endl;
        return true;
    }
}

//template<typename T>
//bool KiranLinkList<T>::AddEnd( T arg)
//{
//     cout<<"KiranLinkList AddEnd data"<<endl;
//     this->Add(arg);
//    return true;
//}

//template<typename T>
//bool KiranLinkList<T>::RemoveTop( T arg)
//{
//    cout<<"KiranLinkList RemoveTop data"<<endl;
//    Node<T> *old,*temp;
//    temp=m_head;
//    while (temp!=nullptr) {
//        if(temp->m_x==arg){
//            if(temp==m_head){
//                m_head=temp->m_nextAdd;
//                delete temp;
//                return;
//            }
//        }
//    }

//}

//template<typename T>
//bool KiranLinkList<T>::RemoveEnd( T arg)
//{
//    cout<<"KiranLinkList RemoveEnd data"<<endl;
//     Node<T> *old,*temp;
//     temp=m_head;
//     while (temp!=nullptr) {
//         if(temp->m_x==arg){
//             if(temp==m_head){
//                 m_head=temp->m_nextAdd;
//                 delete temp;
//                 return;
//             }
//             else
//             {
//                 old->m_nextAdd=temp->m_nextAdd;
//                 delete temp;
//                 return;
//             }
//         }
//         else{
//             old=temp;
//             temp=temp->m_nextAdd
//         }
//     }
//     cout<<"Element not found"<<arg<<endl;
//}


//template<typename T>
//bool KiranLinkList<T>::insert( T arg, int pos)
//{
//     cout<<"KiranLinkList insert between link data"<<endl;
//     Node<T> *temp,*r;
//     int i;
//     temp=m_head;
//     for(i=0;i<pos;i++){
//         temp=temp->m_nextAdd;
//         if(temp==nullptr){
//             cout<<"There are less than elements in list"<<pos<<endl;
//             return false;
//         }
//     }
//     r=new Node<T>;
//     r->m_x=arg;
//     r->m_nextAdd=temp->m_nextAdd;
//     temp->m_nextAdd=r;
//     return true;
//}

//template<typename T>
//bool KiranLinkList<T>::Add(T *arg)
//{
//    cout<<"KiranLinkList Add dynamic data"<<endl;
//    Node<T> *temp,*r;
//   if(m_head==nullptr){
//       cout<<"First Node"<<endl;
//       temp=new Node<T>;
//       temp->SetX(*arg);
//       temp->setNextAdd(nullptr);
//       m_head=temp;
//       return true;
//   }
//   else
//   {
//       temp=m_head;
//       while(temp->getnextAdd()!=nullptr){
//           temp=temp->getnextAdd();
//       }
//       r=new Node<T>;
//       r->SetX(*arg);
//       r->setNextAdd(nullptr);
//       temp->setNextAdd(r);
//     cout<<"adding the node complete"<<endl;
//     return true;
//   }

//}

//template<typename T>
//bool KiranLinkList<T>::AddTop(T *arg)
//{
//    cout<<"KiranLinkList AddTop dynamic data"<<endl;
//    Node<T> *temp;
//    temp=new Node<T>;
//    temp->SetX(*arg);
//    temp->setNextAdd(m_head);
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
//bool KiranLinkList<T>::RemoveTop(T *arg)
//{
//    cout<<"KiranLinkList RemoveTop dynamic data"<<endl;
//    cout<<"KiranLinkList RemoveTop data"<<endl;
//    Node<T> *old,*temp;
//    temp=m_head;
//    while (temp!=nullptr) {
//        if(temp->Getx()==*arg){
//            if(temp==m_head){
//                m_head=temp->getnextAdd();
//                delete temp;
//                return;
//            }
//        }
//    }
//}

//template<typename T>
//bool KiranLinkList<T>::RemoveEnd(T *arg)
//{
//    cout<<"KiranLinkList RemoveEnd dynamic data"<<endl;
//    Node<T> *old,*temp;
//    temp=m_head;
//    while (temp!=nullptr) {
//        if(temp->Getx()==*arg){
//            if(temp==m_head){
//                m_head=temp->getnextAdd();
//                delete temp;
//                return;
//            }
//            else
//            {
//                old->getnextAdd()=temp->getnextAdd();
//                delete temp;
//                return;
//            }
//        }
//        else{
//            old=temp;
//            temp=temp->getnextAdd();
//        }
//    }
//    cout<<"Element not found"<<*arg<<endl;
//}

//template<typename T>
//bool KiranLinkList<T>::insert(T *arg, int pos)
//{
//    cout<<"KiranLinkList insert dynamic data"<<endl;
//    Node<T> *temp,*r;
//    int i;
//    temp=m_head;
//    for(i=0;i<pos;i++){
//        temp=temp->getnextAdd();
//        if(temp==nullptr){
//            cout<<"There are less than elements in list"<<pos<<endl;
//            return false;
//        }
//    }
//    r=new Node<T>;
//    r->SetX(*arg);
//    r->getnextAdd()=temp->getnextAdd();
//    temp->getnextAdd()=r;
//    return true;
//}
#endif // KIRANLINKLIST_H
