//C Program to find area of a triangle when there sides are given.
#include <stdio.h>

int main(int argc, char *argv[])
{
    int area,height,base;
    printf("Enter the base and height\n");
    scanf("%d %d",&base,&height);
    area=0.5*base*height;
    printf("area of triangle=%d\n",area);
    return 0;
}

