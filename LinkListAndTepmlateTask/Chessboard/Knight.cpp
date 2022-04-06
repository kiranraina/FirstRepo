#include "Knight.h"

Knight::Knight()
{
  cout<<"knight constructor called"<<endl;
}
Knight::~Knight()
{
  cout<<"knight constructor called"<<endl;
}
bool Knight::move()
{
    cout<<"Knight move called"<<endl;
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
bool Knight::moveLeft()
{
    cout<<"Knight moveLeft called"<<endl;
}

bool Knight::moveRight()
{
    cout<<"Knight moveRight called"<<endl;
}

bool Knight::moveFront()
{
    cout<<"Knight moveFront called"<<endl;
}

bool Knight::moveBack()
{
    cout<<"Knight moveBack called"<<endl;
}
