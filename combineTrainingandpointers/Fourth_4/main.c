//C Program To Read Three Numbers And Print The Biggest Of Given Three Numbers
#include <stdio.h>

int main()
{
 //  //Method1
//    int num[3],i,max=0,min=0;
//    for(i=0;i<3;i++)
//    {
//        scanf("%d",&num[i]);
//    }
//    for(i=0;i<3;i++)
//    {
//         if(min>num[i]){
//             min=num[i];
//         }else if(max<num[i]){
//             max=num[i];
//         }
//    }


//    printf("The Great value %d",max);


 //  //Method2
    int num1,num2,num3;

    printf("Enter the 3 numbers\n");
    scanf("%d\n %d\n %d",&num1,&num2,&num3);

    if(num1>num2 && num1>num3){
        printf("num1 is Great number %d",num1);
    }else if(num2>num1 && num2>num3){
      printf("num2 is Great number %d",num2);
    }else{
        printf("num3 is Great number %d",num3);
    }


    return 0;
}
