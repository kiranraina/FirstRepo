#include <stdio.h>

int main(int argc, char *argv[])
{
   char *p="helo";
   *p='M';
   p="bye";
  printf("%s",p);
//  printf("%u",*p);


    return 0;
}
