#ifndef BISHOP_H
#define BISHOP_H
#include"CommanUtiles.h"

class Bishop
{
    enum direction{
        left=1,
        right=2,
        front=3,
        back=4
    };
public:
    Bishop();
   ~Bishop();
    bool move();
    bool moveLeft();
    bool moveRight();
    bool moveFront();
    bool moveBack();
};

#endif // BISHOP_H
