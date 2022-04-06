//#include <stdio.h>

//int main(int argc, char *argv[])
//{
//static char *s[]={
//                  "ice",
//                   "green",
//                   "cone",
//                    "please"
//};
//static char **ptr[]={s+3,s+2,s+1,s};
//char ***p=ptr;
//printf("\n%s",**++p);
//printf("\n%s",*--*++p+3);
//printf("\n%s",*p[-2]+3);
//printf("\n%s",p[-1][-1]+1);
//    return 0;
//}

//#include <stdio.h>
//#include<string.h>

//int main(int argc, char *argv[])
//{
// char str[]="For your eyes only";
//int i;
//char *p;
//int m=strlen(str);
//for(p=str,i=0;p+i<=str+strlen(str);p++,i++){
//    printf("%d",*(p+i));
//}
//printf("\n");
//printf("%d",m);
//    return 0;
//}

#include <stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
 char s[]="C is a philosophy of life";
 char t[40];
 char *ss,*tt;
 ss=s;
 tt=t;
 while(*tt++=*ss++);
 printf("%s\n",t);


    return 0;
}
