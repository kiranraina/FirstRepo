#ifndef BOARDCREATE_H
#define BOARDCREATE_H
#include<iostream>
#include<Board.h>
#include<list>
using namespace std;
class BoardCreate
{
public:
    BoardCreate();
    ~BoardCreate();
    void init();
    void print();
private:
       list<Board*>m_listBoards;

};

#endif // BOARDCREATE_H
