#include <stdio.h>
#include <alloca.h>
struct node{
    int data;
    struct node *link;
};
int count(struct node *);
void display(struct node *);
void add(struct node**,int);
int deleteat(struct node**,int);
int main(int argc, char *argv[])
{
  struct node *p;
  p=NULL;
   add(&p,5);
   add(&p,1);
   add(&p,6);
   add(&p,4);
   add(&p,7);

   display(p);
   printf("\n No of Element in the linked list=%d",count(p));

//   deleteat(&p,7);
//   deleteat(&p,4);
//   deleteat(&p,5);
//   deleteat(&p,9);

//   display(p);
//   printf("\n No of Element in the linked list=%d",count(p));
    return 0;
}
void add(struct node**q,int num){

    struct node *r,*temp=*q;

    r=malloc(sizeof(struct node));
    r->data=num;

    if(*q==NULL||(*q)->data>num){
        *q=r;
        (*q)->link=temp;
    }
    else{
        while (temp!=NULL) {
           if(temp->data<=num&&(temp->link->data>num||temp->link==NULL))
           {
               r->link=temp->link;
               temp->link=r;
               return;
           }
           temp=temp->link;
        }
    }
}
int deleteat(struct node **q,int num){

    struct node *old,*temp;
    temp=*q;
    while(temp!=NULL){
        if(temp->data==num){
            if(temp==*q)
            {
                *q=temp->link;
                free(temp);
                return;
            }
            else
            {
                old->link=temp->link;
                free(temp);
                return;
            }
        }
        else{
            old=temp;
            temp=temp->link;
        }
    }
     printf("\nElement %d not found",num);
}

int count(struct node *q){
    int c=0;
    while(q!=NULL){
        q=q->link;
        c++;
    }
    return c;
}
void display(struct node *q){

    printf("\n");
    while (q!=NULL) {
       printf("%d",q->data);
       q=q->link;
    }
}

