#ifndef QUEEN_H
#define QUEEN_H
#include"CommanUtiles.h"

class Queen
{
    enum direction{
        left=1,
        right=2,
        front=3,
        back=4
    };
public:
    Queen();
    ~Queen();
    bool move();
    bool moveLeft();
    bool moveRight();
    bool moveFront();
    bool moveBack();
};

#endif // QUEEN_H
