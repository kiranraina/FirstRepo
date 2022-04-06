//C Program to read date,month, year and print the next day’s date,month,year.
#include <stdio.h>

int main(int argc, char *argv[])
{
    int day,month,year;
    printf("Enter the day month and year in integer format eg:1/2/1222\n");
    scanf("%d\n%d\n%d",&day,&month,&year);
    switch(month) {
     printf("jan");
    case 1:

        if(day==31)
        {
            day=1;
            month=2;
        }
        else
        {
            day++;

        }
        printf("day=%d\n month=%d\n year=%d\n",day,month,year);
        break;

    case 2:
        if(day==28)
        {
            day=1;
            month=3;
        }
        else
        {
            day++;

        }
        printf("day=%d\n month=%d\n year=%d\n",day,month,year);
        break;

    case 3:
        if(day==31)
        {
            day=1;
            month=4;
        }
        else
        {
            day++;

        }
        printf("day=%d\n month=%d\n year=%d\n",day,month,year);
        break;

    case 4:
        if(day==30)
        {
            day=1;
            month=5;
        }
        else
        {
            day++;

        }
        printf("day=%d\n month=%d\n year=%d\n",day,month,year);
        break;

    case 5:
        if(day==31)
        {
            day=1;
            month=6;
        }
        else
        {
            day++;

        }
        printf("day=%d\n month=%d\n year=%d\n",day,month,year);
        break;

    case 6:
        if(day==30)
        {
            day=1;
            month=7;
        }
        else
        {
            day++;

        }
        printf("day=%d\n month=%d\n year=%d\n",day,month,year);
        break;

    case 7:
        if(day==30)
        {
            day=1;
            month=8;
        }
        else
        {
            day++;

        }
        printf("day=%d\n month=%d\n year=%d\n",day,month,year);
        break;

    case 8:
        if(day==31)
        {
            day=1;
            month=9;
        }
        else
        {
            day++;

        }
        printf("day=%d\n month=%d\n year=%d\n",day,month,year);
        break;

    case 9:
        if(day==30)
        {
            day=1;
            month=10;
        }
        else
        {
            day++;

        }
        printf("day=%d\n month=%d\n year=%d\n",day,month,year);
        break;

    case 10:
        if(day==31)
        {
            day=1;
            month=11;
        }
        else
        {
            day++;

        }
        printf("day=%d\n month=%d\n year=%d\n",day,month,year);
        break;

    case 11:
        if(day==30)
        {
            day=1;
            month=12;
        }
        else
        {
            day++;

        }
        printf("day=%d\n month=%d\n year=%d\n",day,month,year);
        break;

    case 12:
        if(day==31)
        {
            day=1;
            month=1;
            year++;
        }
        else
        {
            day++;

        }
        printf("day=%d\n month=%d\n year=%d\n",day,month,year);
        break;

}

    return 0;
}
