/*C Program to create a file of numbers and copy odd number into second file and even number into
third file*/
#include <stdio.h>
# include <string.h>

int main(int argc, char *argv[])
{
    FILE *file,*file1,*file2;
    int num,number[5],number3[5];
    printf("enter the number count\n");
    scanf("%d",&num);
    printf("Enter the number\n");
    for(int i=0;i<num;i++){
        scanf("%d",&number[i]);
    }
    file2=fopen("file2.txt","w+");
    file=fopen("file.txt","w+");
    file1=fopen("file1.txt","w+");

    if(file==NULL&&file1==NULL&&file2==NULL)
    {
        printf("file.txt open failed\n");
        printf("file1.txt open failed\n");
        printf("file2.txt open failed\n");
    }
    else
    {
        printf("file.txt opened success\n");
        printf("file1.txt opened success\n");
        printf("file2.txt opened success\n");
        for (int i = 0; i < num; i++)
        {
            fprintf(file2,"%d\n",number[i]);
        }
        fclose(file2);

        file2=fopen("file2.txt","r");
        if(file2==NULL){
            printf("file2.txt open failed\n");
        }else{
     printf("file2.txt opened success\n");
            for (int i = 0; i < num; i++)
            {
                fscanf(file2,"%d\n",&number3[i]);
            }
            for (int i = 0; i < num; i++)
            {
                printf("%d\n",number3[i]);
            }
        }
        if(num>0){
            for(int i=0;i<num;i++){
                if(number3[i]%2==0){
                    fprintf(file,"%d\n",number3[i]);
                }
                else{
                    fprintf(file1,"%d\n",number3[i]);
                }
            }
        }
        fclose(file);
        fclose(file1);
        printf("file.txt close success\n");
        printf("file1.txt close success\n");
    }

    return 0;
}
