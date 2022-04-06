#include <stdio.h>
struct node{
    int data;
    struct node *link;
};
push(struct node **,int);
pop(struct node **);
stack_display(struct node*);
count(struct node*);
int main(int argc, char *argv[])
{
 struct node *top;
 top=NULL;
 push(&top,11);
 push(&top,12);
 push(&top,13);
 push(&top,14);
 push(&top,15);
 push(&top,16);
 push(&top,17);

 stack_display(top);
 printf("No elements items in stack=%d",count(top));
 printf("\n items extracted from stack ");

 item=pop(&top);
 printf("%d",item);
 item=pop(&top);
 printf("%d",item);
 item=pop(&top);
 printf("%d",item);


    return 0;
}
push(struct node **s,int num){
    struct node *q;
    q=malloc(sizeof(struct node));
    q->data=num;
    q->link=*s;
    *s=q;
}
pop(struct node **s){
    int item;
   struct node *q;
   if(*s==null){
       printf("Empty stack");
   }else{
   *q=*s;
    item=q->data;
    *s=q->link;
    free(q);
    return(item);
}
}
