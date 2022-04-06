#include <iostream>
#include <string.h>
using namespace std;

int main(int argc, char *argv[])
{
    char name[20];
    int i,vowel=0,lowercase,uppercase,length=0,constant=0;
    printf("Enter the name\n");
    fgets(name,sizeof(name),stdin);

    length=strlen(name);
    for(int i=0;i<length-1;i++)
    {
//        printf("%d\n",i);
    if((name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')||(name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U')){
     vowel++;
    }else
    {
        constant++;
    }
    }
    printf("vowel=%d\n",vowel);
    printf("constant=%d\n",constant);

    return 0;
}
