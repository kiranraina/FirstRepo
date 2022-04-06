#include <stdio.h>

int main(int argc, char *argv[])
//{
//    char a[]="VisualC++";
//    char *c=a;
//    char*b="Visual C++";
//    printf("%u\n %c\n %u\n %c\n",a,a,b,*b);
//    printf("%d\n %d\n",sizeof(a),sizeof(b));
//     printf("%d\n %d\n",sizeof(*c),sizeof(*b));
//    return 0;
//}
//{
//   int a[]={12,14,25,23,45};
//    printf("%u\n %u\n %u\n %u\n %u\n",a,&a,a+1,&a+1,*(a+1));

//    return 0;
//}
{
   int a[3][4]={1,2,3,4,
               5,6,7,8,
               9,10,11,12
               };
    printf("%u\n %u\n %u\n",a[0]+1,*(a[0]+1),*(*(a+0)+1));
    return 0;
}
