#include "Black.h"

Black::Black()
{
    cout<<"Black constructor called"<<endl;
    init();
}
Black::~Black()
{
    cout<<"Black destructor called"<<endl;
}

void Black::init()
{
    cout<<"Black init called"<<endl;
    int pieces;
    cout<<"1.leftbishop\n2.rightbisho\n3.king\n4.queen\n5.leftrook\n6.rightrook\n7.leftknight\n8.rightknight\n9.soldiers"<<endl;
    cout<<"choose which piece you want"<<endl;
    cin>>pieces;
    switch (pieces) {
    case leftbishop:
        m_leftBishop=new Bishop;
        m_leftBishop->move();
        break;
    case rightbishop:
        m_rightBishop=new Bishop;
        m_rightBishop->move();
        break;
    case kingpiece:
        m_king=new King;
        m_king->move();
        break;
    case queen:
        m_queen=new Queen;
        m_queen->move();
        break;
    case leftrook:
        m_leftRook=new Rook;
        m_leftRook->move();
        break;
    case rightrook:
        m_rightRook=new Rook;
        m_rightRook->move();
        break;
    case leftknight:
        m_leftKnight=new Knight;
        m_leftKnight->move();
        break;
    case rightknight:
        m_rightKnight=new Knight;
        m_rightKnight->move();
        break;
    case soldiers:
        int pan_pieces;
        cout<<"1.soldier-1\n2.soldier-2\n3.soldier-3\n4.soldier-4\n5.soldier-5\n6.soldier-6\n7.soldier-7\n8.soldier-8"<<endl;
        cout<<"choose which piece of soldier you want"<<endl;
        cin>>pan_pieces;
        --pan_pieces;
        for(int i=0;i<8;i++)
        {
            if(i==pan_pieces){
                m_soldiers[i]=new Soldiers;
                m_soldiers[i]->move();}
        }
        break;
    default:
        cout<<"Enter the invalid number to select the pieces"<<endl;
        break;
    }
}
