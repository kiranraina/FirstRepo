#include <stdio.h>
struct node{
    int data;
    struct node *link;
}*newnode,*start,*visit;
int main()
{
    newnode->data=10;
    printf("%d",newnode->data);
    return 0;
}
