#include <stdio.h>
#include"alloca.h"
struct btreenode{
   struct btreenode *leftchild;
   int data;
   struct btreenode *rightchild;
};
int main(int argc, char *argv[])
{
  struct btreenode *bt;
  int req,i=1,num;
  bt=NULL;
  printf("Specify the number of data items to be inserted");
  scanf("%d",&req);
  while(i++<=req)
  {
  printf("Enter the value");
  scanf("%d",&num);
  insert(&bt,num);
  }
  printf("Inorder Traversal");
  inorder(bt);
  printf("preorder Traversal");
  preorder(bt);
  printf("postorder Traversal");
  postorder(bt);
    return 0;
}
insert(struct btreenode **sr,int num){

    if(*sr==NULL)
    {
        *sr=malloc(sizeof(struct btreenode));
        (*sr)->leftchild=NULL;
        (*sr)->data=num;
        (*sr)->rightchild=NULL;
    }
    else
    {
       if(num<(*sr)->data)
       {
           insert(&((*sr)->leftchild),num);
       }
       else
       {
            insert(&((*sr)->rightchild),num);
       }
    }
}
inorder(struct btreenode *sr){
    if(sr!=NULL)
    {
       inorder(sr->leftchild);
       printf("%d",sr->data);
        inorder(sr->rightchild);
    }
    else
        return;
}
preorder(struct btreenode *sr){
    if(sr!=NULL)
    {

       printf("%d",sr->data);
       preorder(sr->leftchild);
        preorder(sr->rightchild);
    }
    else
        return;
}
postorder(struct btreenode *sr){
    if(sr!=NULL)
    {
       postorder(sr->leftchild);
        postorder(sr->rightchild);
        printf("%d",sr->data);
    }
    else
        return;
}
