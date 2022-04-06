#include <stdio.h>
int fun1(int);
 int main()
{
    int i=10;
    printf("%d\n",i);
    fun1(i);
    return 0;
}
 int fun1( int i){
      i=20;
      printf("fun value %d",i);
    return i;
}
