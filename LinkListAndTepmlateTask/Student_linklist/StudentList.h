#ifndef STUDENTLIST_H
#define STUDENTLIST_H
#include<iostream>
using namespace std;

struct Node
{
    string Roll;
    string name;
    int sem;
    struct Node *link;
};
void append(struct Node,string,string,int);
void display(struct Node);
class StudentList
{
public:
    StudentList();
     ~StudentList();
    void append(struct Node **q,string name,string roll,int sem);
    void display(struct Node *q);
     void init();
  private:
    struct Node *m_p;
};

#endif // STUDENTLIST_H
