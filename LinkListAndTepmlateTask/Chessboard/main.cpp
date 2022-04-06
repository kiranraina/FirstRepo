#include <iostream>
#include<Board.h>
#include<BoardCreate.h>
#include"Chess.h"

using namespace std;

int main(int argc, char *argv[])
{
    BoardCreate *bc=new BoardCreate;
    bc->print();
    Chess chess_start;
    cout << "Hello World!" << endl;
    return 0;
}
