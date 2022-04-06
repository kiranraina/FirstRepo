#ifndef CHARADD_H
#define CHARADD_H
#include<iostream>
#include"string.h"
using namespace std;

class CharAdd
{
public:
    CharAdd();
//    CharAdd( char a[],char b[]);
   ~ CharAdd();
    void Addition();
private:
    char m_first[5];
    char m_second[5];

};

#endif // CHARADD_H
