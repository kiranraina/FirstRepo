#ifndef ECGDISPLAY_H
#define ECGDISPLAY_H

#include <iostream>
using namespace std;
class ECGDisplay
{
public:
    ECGDisplay();
    bool init();
    bool print();
   ~ECGDisplay();
};

#endif // ECGDISPLAY_H
