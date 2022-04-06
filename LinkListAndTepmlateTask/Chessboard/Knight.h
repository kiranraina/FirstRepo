#ifndef KNIGHT_H
#define KNIGHT_H
#include"CommanUtiles.h"

class Knight
{
    enum direction{
        left=1,
        right=2,
        front=3,
        back=4
    };
public:
    Knight();
    ~Knight();
    bool move();
    bool moveLeft();
    bool moveRight();
    bool moveFront();
    bool moveBack();
};

#endif // KNIGHT_H
