#include <stdio.h>


struct a
{
    struct b
    {
        int i;
        float f;
        char ch;
    }x;
    struct c
    {
        int j;
        float g;
        char ch;
    }y;
};

int main()
{
    int* p;
    struct a z;

    z.x.i=22;
    printf("value of integer %d",&z.x);
    fun(&z.y);
//    printf("%d%f%c\n",z.x.i,z.x.f,z.x.ch);
//    getch();
    return 0;
}
fun(struct c* p)
{
    int  offSet;

    struct b* address;
    struct a* aAdd =((struct a*)0);

    char* jAddress = (char*)&(((struct c*)(&(aAdd->y)))->j);

    char* rightAddress=(char*)((struct a*)0);
    offSet = (jAddress-rightAddress);

    address = ((char*)&(p->j)-offSet);

      printf("%u\n",address);
        printf("%u\n",p);

    address->i=400;
    address->f=3.14;
    address->ch='c';


    printf("%d\n", address->i);
    printf("%f\n", address->f);
    printf("%c\n", address->ch);
}
