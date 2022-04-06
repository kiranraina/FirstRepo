#include "Board.h"

Board::Board()
{
 cout<<"Board constructor called"<<endl;
}
Board::~Board()
{
 cout<<"Board destructor called"<<endl;
}

string Board::getcolor() const
{
     cout<<"Board getcolor called"<<endl;
    return m_color;
}

void Board::setColor(const string color)
{
    cout<<"Board setColor called"<<endl;
    m_color = color;
}

bool Board::getOccuption() const
{
    cout<<"Board getOccuption called"<<endl;
    return m_occuption;
}

void Board::setOccuption(bool occuption)
{
    cout<<"Board setOccuption called"<<endl;
    m_occuption = occuption;
}
