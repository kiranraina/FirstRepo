#ifndef INTLINKLIST_H
#define INTLINKLIST_H
#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
};

void append(struct Node,int);
void addatbeg(struct Node,int);
bool addatbeg(struct Node ,int ,int );
bool Delete(struct Node,int);
void display(struct Node);
int count(struct Node);
class IntLinkList
{
public:
    IntLinkList();
    ~IntLinkList();
    void append(struct Node **q,int num);
    void addatbeg(struct Node **q,int num);
    bool addafter(struct Node *q,int loc,int num);
    bool Delete(struct Node **q,int num);
    void display(struct Node *q);
    int count(struct Node *q);
    void init();
private:
    struct Node *m_p;
};

#endif // INTLINKLIST_H
