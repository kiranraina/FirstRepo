//2.) C Program To Read Two Numbers And Print The Sum Of Given Two Numbers.

#include <stdio.h>

int main()
{
//    float FirstNum,SecondNum,Total=0;

//    //user Give the first number
//    printf("Enter the Firstvalue\n");
//    scanf("%f",&FirstNum);

//    //user Give the second number
//    printf("Enter the Secondvalue\n");
//    scanf("%f",&SecondNum);

//    //Total value of number
//    Total=FirstNum+SecondNum;
//    printf("The Sum of Two Number =%f\n",Total);

//    //method 2

    int FirstNum,SecondNum,Sum=0;

       printf("Enter the Two numbers\n");
       scanf("%d\n %d",&FirstNum,&SecondNum);

       Sum=FirstNum+SecondNum;

       printf("The Sum of Two Number =%d\n",Sum);

    return 0;
}
