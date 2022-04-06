#include <stdio.h>

int main()
{
    int p;
    int *fun();
    p= fun();
    printf("\n%u",p);
    printf("\n%d",p);
    return 0;
}
int *fun()
{
    static int i=20;
    return (&i);
}
