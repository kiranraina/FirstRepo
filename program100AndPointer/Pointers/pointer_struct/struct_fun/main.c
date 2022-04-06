#include <stdio.h>
struct account{
    int no;
    char acc_name[15];
    float bal;
};
void display(struct account*);
int main(int argc, char *argv[])
{
struct account a1={20,"hello",20.000};
display(&a1);
//ptr=&a1;
//printf("%u\n%u\n",a1,&a1);
//printf("%u %u %u\n",&a1.no,&a1.acc_name,&a1.bal);
//printf("%d %s %f\n",ptr->no,ptr->acc_name,ptr->bal);
//printf("\nEnter account nos.,names,and balances\n");
//scanf("%d %s %f",&a1.no,a1.acc_name,&a1.bal);
//scanf("%d %s %f",&a2.no,a2.acc_name,&a2.bal);
//scanf("%d %s %f",&a3.no,a3.acc_name,&a3.bal);
//printf("**********************");
//printf("\n%d %s %f",a1.no,a1.acc_name,a1.bal);
//printf("\n%d %s %f",a2.no,a2.acc_name,a2.bal);
//printf("\n%d %s %f",a3.no,a3.acc_name,a3.bal);
return 0;
}
void display( struct account *ac){
    printf("%d\n%s\n%f\n",ac->no,ac->acc_name,ac->bal);
}
