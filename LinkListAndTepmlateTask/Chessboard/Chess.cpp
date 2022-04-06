#include "Chess.h"

Chess::Chess()
{
   cout<<"chess constructor called"<<endl;
   init();
}
Chess::~Chess()
{
    cout<<"chess destructor called"<<endl;
}

void Chess::init()
{
    int color;
    cout<<"chess init called"<<endl;
    cout<<"1.White\n2.Black"<<endl;
    cout<<"choose which  color pawn you want"<<endl;
    cin>>color;
    switch (color) {
    case whitecolor:
        m_white=new white;
        break;
    case blackcolor:
        m_black=new Black;
        break;
    default:
        cout<<"Entered inavlid number to select the color"<<endl;
    }

}

