#ifndef BOARD_H
#define BOARD_H
#include<iostream>
using namespace std;

class Board
{
public:
    Board();
    ~Board();
    string getcolor() const;
    void setColor(const string color);

    bool getOccuption() const;
    void setOccuption(bool occuption);

private:
    string m_color;
    bool m_occuption;
};

#endif // BOARD_H
