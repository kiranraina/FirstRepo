#include <stdio.h>

int main(int argc, char *argv[])
{
  int num1,num2,num3,num4;
  printf("Enter the a value\n");
  scanf("%d\n %d\n %d\n %d",&num1,&num2,&num3,&num4);
  int min=((num1<num2&&num1<num3)&&(num1<num4))?num1:((num2<num1&&num2<num3)&&(num2<num4))?num2:((num3<num1&&num3<num2)&&(num3<num4))?num3:num4;
  printf("The smallest number is =%d\n",min);
    return 0;
}
