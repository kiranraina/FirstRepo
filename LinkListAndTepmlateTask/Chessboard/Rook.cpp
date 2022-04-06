#include "Rook.h"

Rook::Rook()
{
  cout<<"Rook constructor called"<<endl;
}
Rook::~Rook()
{
  cout<<"Rook constructor called"<<endl;
}
bool Rook::move()
{
    cout<<"Rook move called"<<endl;
    int direct;
    cout<<"1.leftMove\n2.rightMove\n3.Front\n4.Back\n"<<endl;
    cout<<" which direction you want move"<<endl;
    cin>>direct;
    switch (direct) {
    case left:
        this->moveLeft();
        break;
    case right:
        this->moveRight();
        break;
    case front:
       this->moveFront();
        break;
    case back:
       this->moveBack();
        break;
    default:
        cout<<"selected the invalid number to move the Bishop"<<endl;
}
}
bool Rook::moveLeft()
{
    cout<<"Rook moveLeft called"<<endl;
}

bool Rook::moveRight()
{
    cout<<"Rook moveRight called"<<endl;
}

bool Rook::moveFront()
{
    cout<<"Rook moveFront called"<<endl;
}

bool Rook::moveBack()
{
    cout<<"Rook moveBack called"<<endl;
}
