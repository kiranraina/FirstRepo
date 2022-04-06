#include "King.h"

King::King()
{
  cout<<"king constructor called"<<endl;
}
King::~King()
{
  cout<<"king destructor called"<<endl;
}
bool King::move()
{
    cout<<"King move called"<<endl;
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
        cout<<"selected the invalid number to move the king"<<endl;
}
}
bool King::moveLeft()
{
    cout<<"King moveLeft called"<<endl;
}

bool King::moveRight()
{
    cout<<"King moveRight called"<<endl;
}

bool King::moveFront()
{
    cout<<"King moveFront called"<<endl;
}

bool King::moveBack()
{
    cout<<"King moveBack called"<<endl;
}
