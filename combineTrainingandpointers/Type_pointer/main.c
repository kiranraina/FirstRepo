#include <stdio.h>

int main()
{
    //Declaration of variable
    char c,*cc;
    int i,*ii;
    float a,*aa;

    //initialization of variable
    c='a';
    i=54;
    a=3.14;
    cc=&c;
    ii=(char*)&i;
    aa=(char*)&a;
    printf("\n address contained in cc=%u",cc);
    printf("\n address contained in cc=%u",ii);
    printf("\n address contained in cc=%u",aa);
    printf("\n Value of c=%c",*cc);
    printf("\n Value of c=%d",*ii);
    printf("\n Value of c=%f",*aa);


    return 0;
}
