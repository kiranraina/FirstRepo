#ifndef SOLDIERS_H
#define SOLDIERS_H
#include"CommanUtiles.h"

class Soldiers
{
    enum direction{
        left=1,
        right=2,
        front=3,
        back=4
    };
public:
    Soldiers();
    ~Soldiers();
    bool move();
    bool moveLeft();
    bool moveRight();
    bool moveFront();
    bool moveBack();
};

#endif // SOLDIERS_H
