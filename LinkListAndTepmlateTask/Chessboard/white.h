#ifndef WHITE_H
#define WHITE_H
#include<CommanUtiles.h>
//#include"Chess.h"
#include"Allpawn.h"
class white/*:public Chess*/
{
    enum pieces{
        leftbishop=1,
        rightbishop=2,
        kingpiece=3,
        queen=4,
        leftrook=5,
        rightrook=6,
        leftknight=7,
        rightknight=8,
        soldiers=9
    };
public:
    white();
    ~white();
    void init();
private:
    Bishop *m_leftBishop;
    Bishop *m_rightBishop;
    King  *m_king;
    Queen  *m_queen;
    Rook *m_leftRook;
    Rook *m_rightRook;
    Knight *m_leftKnight;
    Knight *m_rightKnight;
    Soldiers *m_soldiers[8];
};

#endif // WHITE_H
