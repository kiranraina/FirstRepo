//C Program for example of static variable.
#include <stdio.h>
void function();
int main(int argc, char *argv[])
{
   function();
   function();
    return 0;
}
void function(){
   static int i=0;
   i+=2;
   printf("%d\n",i);
}
