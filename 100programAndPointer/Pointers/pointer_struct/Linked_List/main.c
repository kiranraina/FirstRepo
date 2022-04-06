#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};
int main(){
    //node 1 creating
    struct node *head;
    head=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    head->data=25;
    head->link=NULL;

    //node 2 creating
    struct node *current=(struct node *)malloc(sizeof(struct node));
    current->data=45;
    current->link=NULL;
    head->link=current;

    //node 3 creating
        current=(struct node *)malloc(sizeof(struct node));
        current->data=60;
        current->link=NULL;
        head->link->link=current;

    return 0;

    printf("%d",head->data);
    return 0;
}
