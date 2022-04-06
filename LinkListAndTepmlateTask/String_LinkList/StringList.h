#ifndef STRINGLIST_H
#define STRINGLIST_H
#include<iostream>
using namespace std;

struct Node
{
    string data;
    struct Node *link;
};
void append(struct Node,string);
void display(struct Node);
class StringList
{
public:
    StringList();
     ~StringList();
    void append(struct Node **q,string name);
    void display(struct Node *q);
     void init();
  private:
    struct Node *m_p;
};

#endif // STRINGLIST_H
