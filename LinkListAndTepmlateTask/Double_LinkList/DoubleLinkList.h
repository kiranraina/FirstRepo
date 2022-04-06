#ifndef DOUBLELINKLIST_H
#define DOUBLELINKLIST_H
#include<iostream>
using namespace std;

struct Node
{
    double data;
    struct Node *link;
};
void append(struct Node,float);
void display(struct Node);
class DoubleLinkList
{
public:
    DoubleLinkList();
    ~DoubleLinkList();
    void append(struct Node **q,double num);
    void display(struct Node *q);
     void init();
  private:
    struct Node *m_p;
};

#endif // DOUBLELINKLIST_H
