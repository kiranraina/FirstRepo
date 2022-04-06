#include <stdio.h>

int main(int argc, char *argv[])
{
    char*p="Hello";/*pointer is variable,so is string*/
    printf("p=%s\n",p);
    *p='M';
    printf("p=%c\n",*p);
    p="Bye";
    printf("p=%s\n",p);


    const char *q="Hello";/*string is constant,pointer is not*/
     printf("q=%s\n",q);
    *q='M';
     printf("q=%c\n",*q);
     q="Bye";
     printf("q=%s\n",q);


    char const *s="Hello";/*string is constant,pointer is not*/
    printf("s=%s\n",s);
   *s='M';
    printf("s=%c\n",*s);
    s="Bye";
    printf("s=%s\n",s);

    char* const t="Hello";/*pointer is constant, string is not*/
    printf("t=%s\n",t);
   *t='M';
    printf("t=%c\n",*t);
    t="Bye";
    printf("t=%s\n",t);
    const char * const u="Hello";/*string is constant, pointer is not*/

    printf("u=%s\n",u);
   *u='M';
    printf("q=%c\n",*u);
    u="Bye";
    printf("u=%s\n",u);

    char const * const v="Hello";/*string is constant, pointer is not*/

    printf("v=%s\n",v);
   *v='M';
    printf("v=%c\n",*v);
    v="Bye";
    printf("v=%s\n",v);
     return 0;
}
