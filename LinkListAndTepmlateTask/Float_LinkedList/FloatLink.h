#ifndef FLOATLINK_H
#define FLOATLINK_H
#include<iostream>
using namespace std;

struct Node
{
    float data;
    struct Node *link;
};
void append(struct Node,float);
void display(struct Node);
class FloatLink
{
public:
    FloatLink();
    ~FloatLink();
     void append(struct Node **q,float num);
     void display(struct Node *q);
      void init();
   private:
     struct Node *m_p;
};

#endif // FLOATLINK_H
