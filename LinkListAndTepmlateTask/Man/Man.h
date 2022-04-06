#ifndef MAN_H
#define MAN_H
#include<iostream>
using namespace std;

class Man
{
public:
    Man();
   ~ Man();
private:
    string m_name;
    int m_age;
    float m_height;
    float m_weight;
    string m_color;
    string m_occuption;
    int m_numberlegs;
    int m_numberHand;
    int m_eyes;
    int m_ear;
    string m_hairColor;

};

#endif // MAN_H
