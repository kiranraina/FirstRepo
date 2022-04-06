#include <stdio.h>

int main(int argc, char *argv[])
{
//int a[2][2]={1,2,
//             3,4
//            };
//printf("a=%u\n",a);
//printf("&a=%u\n",&a);
//printf("a+1=%u\n",a+1);
//printf("*a+1=%u\n",*a+1);
//printf("&a+1=%u\n",&a+1);
//printf("a[0]=%u\n",a[0]);
//printf("&a[0]=%u\n",&a[0]);
//printf("a[1]=%u\n",a[1]);
//printf("&a[1]=%u\n",&a[1]);
//printf("*a[0]=%d\n",*a[0]);
//printf("&*a[0]=%u\n",&*a[0]);
//printf("a[0][0]=%d\n",a[0][0]);
//printf("&a[0][0]=%u\n",&a[0][0]);
//printf("a[1][1]=%d\n",a[1][1]);
//printf("&a[1][1]=%u\n",&a[1][1]);
//printf("a[0]+1=%u\n",a[0]+1);
//printf("&a[0]+1=%u\n",&a[0]+1);

//int a[3][3][3]={
//           {1,2,3,
//            4,5,6,
//            7,8,9
//                },
//    {
//        9,8,7,
//        6,5,4,
//        3,2,1
//    },
//    {
//        6,7,5,
//        4,9,2,
//        7,5,3
//    }
//};
//printf("\n%u %u %u",a,a+1,a+2);
//printf("\n%u %u %u",a[0],a[0]+1,a[1]);
//printf("\n%u %u %u",a[1][1],a[1][0]+1,a[0][1]);


//static int a[]={0,1,2,3,4};
//static int *p[]={a,a+2,a+1,a+4,a+3};
//int **ptr;
//ptr=p;
//**++ptr;
//printf("\n%d %d %d",**ptr,ptr-p,*ptr-a);
 static int arr[]={97,98,99,100,101,102,103,104};
 int *ptr=arr+1;
 int a=10;
printf("%d",++a);
 printf("%d %d %d %d %d",++a,a--,a,a++,++a);

 printf("%d\n",*ptr);
 print(++ptr,ptr--,ptr,ptr++,++ptr);

    return 0;
}
print(int *a,int *b,int *c,int *d,int *e)
{
    printf("\n %d %d %d %d %d",*a,*b,*c,*d,*e);
}
