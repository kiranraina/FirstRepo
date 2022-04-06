#include <stdio.h>

int main(int argc, char *argv[])
{
    int num,rem=0,a[5],i=0;
    printf("Enter the number\n");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        a[i]=rem;
        num=num/10;
//        printf("rem=%d",num);
//        printf("a=%d\n",a[i]);
        i++;
    }
    for(int j=4;j>=0;j--){
//        printf("%d",a[j]);
        switch (a[j]) {
        case 0:
            printf(" ###\n"
                   "#   #\n"
                   "#   #\n"
                   "#   #\n"
                   "#   #\n"
                   "#   #\n"
                   "#   #\n"
                   " ###\n"
                   );
            printf("\n");
            break;
        case 1:
            printf(" #\n"
                   "##\n"
                   " #\n"
                   " #\n"
                   " #\n"
                   " #\n"
                   " #\n"
                   "###\n"
                   );
             printf("\n");
            break;
        case 2:
            printf("#####\n"
                   "    #\n"
                   "    #\n"
                   "    #\n"
                   "#####\n"
                   "#\n"
                   "#\n"
                   "#####\n"
                   );
             printf("\n");
            break;
        case 3:
            printf("#####\n"
                   "    #\n"
                   "    #\n"
                   "#####\n"
                   "    #\n"
                   "    #\n"
                   "    #\n"
                   "#####\n"
                   );
             printf("\n");
            break;
        case 4:
            printf("#\n"
                   "#\n"
                   "#\n"
                   "#\n"
                   "# #\n"
                   "#####\n"
                   "  #\n"
                   "  #\n"
                   "  #\n"
                   );
             printf("\n");
            break;
        case 5:
            printf("#####\n"
                   "#\n"
                   "#\n"
                   "#####\n"
                   "    #\n"
                   "    #\n"
                   "    #\n"
                   "#####\n"
                   );
             printf("\n");
            break;
        case 6:
            printf("#####\n"
                   "#\n"
                   "#\n"
                   "#####\n"
                   "#    #\n"
                   "#    #\n"
                   "#    #\n"
                   "#####\n"
                   );
             printf("\n");
            break;
        case 7:
            printf("#####\n"
                   "    #\n"
                   "    #\n"
                   "    #\n"
                   "    #\n"
                   "    #\n"
                   "    #\n"
                   "    #\n"
                   );
             printf("\n");
            break;
        case 8:
            printf("#####\n"
                   "#   #\n"
                   "#   #\n"
                   "#####\n"
                   "#   #\n"
                   "#   #\n"
                   "#   #\n"
                   "#####\n"
                   );
             printf("\n");
            break;
        case 9:
            printf("#####\n"
                   "#   #\n"
                   "#   #\n"
                   "#####\n"
                   "    #\n"
                   "    #\n"
                   "    #\n"
                   "    #\n"
                   );
             printf("\n");
            break;
        }
    }
    return 0;
}
