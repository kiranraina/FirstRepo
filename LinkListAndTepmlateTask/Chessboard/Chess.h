#ifndef CHESS_H
#define CHESS_H
#include<CommanUtiles.h>
#include"Black.h"
#include"white.h"
class Chess
{
    enum Color{
        whitecolor=1,
        blackcolor=2
    };
public:
    Chess();
    ~Chess();
    void init();
private:
    Black* m_black;
    white* m_white;
};

#endif // CHESS_H
