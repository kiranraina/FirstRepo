#ifndef ROOK_H
#define ROOK_H
#include"CommanUtiles.h"
class Rook
{
    enum direction{
        left=1,
        right=2,
        front=3,
        back=4
    };
public:
    Rook();
    ~Rook();
    bool move();
    bool moveLeft();
    bool moveRight();
    bool moveFront();
    bool moveBack();
};

#endif // ROOK_H
