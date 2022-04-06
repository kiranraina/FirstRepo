#ifndef CONCRETEMIXER_H
#define CONCRETEMIXER_H
#include <iostream>
using namespace std;

class ConcreteMixer
{
public:
    ConcreteMixer();
    ~ ConcreteMixer();
private:
    string m_mixer;
    string m_blades;
    string m_waterTank;
    string m_drum;
    string m_mixerNumber;
};

#endif // CONCRETEMIXER_H
