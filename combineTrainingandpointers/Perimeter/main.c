#include <stdio.h>

int main()
{
    int radius;
    float area,perimeter;
    printf("Enter the radius\n");
    scanf("%d",&radius);
    areaperi(radius,&area,&perimeter);
    printf("area=%f\n",area);
    printf("perimeter=%f\n",perimeter);
    return 0;
}
areaperi(int r,float *a,float *p)
{
  *a=3.14*r*r;
  *p=2*3.14*r;
}
