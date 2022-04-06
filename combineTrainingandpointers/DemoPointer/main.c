#include <stdio.h>
//void fun(int**);
//int main()
//{
//    int b;
//    int *j;
//    printf("addres of j=%u\n",j);
//    printf("value of j=%d\n",*j);
//    printf("address of j=%u\n",&j);
//    fun(&j);

//    return 0;
//}
//void fun(int **k){
//    int a=10;
//    int *j=&a;
//    printf("value of a=%d\n",a);
//    printf("addres of j=%u\n",j);
//    printf("value of *j=%d\n",*j);
//    printf("address of k=%u\n",k);
//    printf("address of *k=%u\n",*k);
//    printf("address of **k=%u\n",**k);
//    printf("address of **k=%u\n",&k);
//}
//int main(){
//    float i=10,*j;

//    void *k;
//    k=&i;
//    j=k;
//    printf("\n%f",*j);
//    printf("\n%u",k);
//    return 0;
//}
int main(){
    int a=10,*j;
    void *k;
    j=&a;
    printf("\nbefore j=%u\n before k=%u\n",j,k);
    j++;
    k++;
    printf("\nafter j=%u\n after k=%u",j,k);
    return 0;
}
