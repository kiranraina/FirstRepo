#ifndef MYLINKEDLIST_H
#define MYLINKEDLIST_H

#include <iostream>
using namespace std;

class PatientMonitoringSystem;
template <class T>
class Node {
public:
    template <class J>friend class myLinkedList;
    void display();

    T* data;
    Node<T> *link;
};

template <class T>
void Node<T>::display(){
    data->print();
}

template <class T>
class myLinkedList
{
public:
    myLinkedList();
    bool add(T *arg);

    bool addTop(T *arg);
    bool addEnd(T *arg);

    int length();

    bool removeTop();
    bool removeEnd(T *arg);

    bool insert();

    void print();

    ~myLinkedList();

    Node<T> *m_head;
    Node<T> *m_tail;
};

template <class T>
myLinkedList<T>::myLinkedList()
{
    cout << " myLinkedList Constructor " << endl;
    m_head=nullptr;
}


template <class T>
bool myLinkedList<T>::add(T *arg){
    cout << "Adding Data at End" << endl;
    Node<T> *temp,*r;
    temp=m_head;

    if(m_head==nullptr)
    {
        cout << "First Node is created" << endl;
        temp=new Node<T>;
        temp->data = arg;
        temp->link=nullptr;
        m_head=temp;
        m_tail = temp;
        return true;
    }
    else{
        temp=m_head;
        while(temp->link!=nullptr)
        {
            temp=temp->link;
        }
        r=new Node<T>;
        r->data=arg;
        r->link=nullptr;
        m_tail = r;
        temp->link=r;
    }
    return true;
}

template <class T>
bool myLinkedList<T>::addTop(T *arg){
    cout << "Adding Data at beginning" << endl;
    Node<T> *temp;
    temp = new Node<T>;
    temp->data = arg;
    temp->link = m_head;
    m_head = temp;
    return true;
}

template <class T>
void myLinkedList<T>::print(){
    while(m_head!=NULL)
    {
        cout << endl;
        m_head->m_x.display();
        m_head = m_head->m_y;
        cout << endl;
    }
}

template <class T>
int myLinkedList<T>::length(){
    int length = 0;
    while(m_head!=NULL)
    {
        cout << endl;
        length++;
        m_head->m_x.display();
        m_head = m_head->m_y;
        cout << endl;
    }
    return length;

}

template <class T>
bool myLinkedList<T>::removeTop(){
    cout << "removing data at top " << endl;
    Node<T> *temp;
    temp=m_head;
    while (temp!=nullptr) {
        m_head=temp->link;
        free(temp);
        return true;
    }
    return false;
}

template <class T>
bool myLinkedList<T>::removeEnd(T *ref){
    cout << "Removing Data at End" << endl;
    return true;
}


template <class T>
myLinkedList<T>::~myLinkedList()
{
    cout << " myLinkedList Destructor" << endl;
}
#endif // MYLINKEDLIST_H
