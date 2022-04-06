/*C Program to count the number of words, characters, alphabets, vowels, consonants and digit in a
line of text.*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char name[30];
    int length,alphabets=0,characters=0,words=1,consonants=0,vowels=0,digit=0,lowercase,uppercase;
    printf("Enter the name\n");
    fgets(name,sizeof(name),stdin);
    length=strlen(name);
    for(int i=0;i<length-1;i++)
    {
                lowercase=(name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u');
                uppercase=(name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U');

        if((name[i]>='A'&&name[i]<='Z')||(name[i]>='a'&&name[i]<='z')){
            alphabets++;
            characters++;
             if(lowercase||uppercase){
                        vowels++;
                    }else{
                        consonants++;
                    }
        }else if(name[i]==32){
            words++;
        }else if(name[i]>='0'&&name[i]<='9'){
            digit++;
        }
    }
    printf("alphabets=%d\n",alphabets);
    printf("characters=%d\n",characters);
    printf("words=%d\n",words);
    printf("digit=%d\n",digit);
    printf("vowels=%d\n",vowels);
    printf("consonants=%d\n",consonants);
    return 0;
}
