#ifndef KING_H
#define KING_H
#include"CommanUtiles.h"
class King
{
    enum direction{
        left=1,
        right=2,
        front=3,
        back=4
    };
public:
    King();
    ~King();
    bool move();
    bool moveLeft();
    bool moveRight();
    bool moveFront();
    bool moveBack();
};

#endif // KING_H
