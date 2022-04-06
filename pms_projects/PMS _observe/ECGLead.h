#ifndef ECGLEAD_H
#define ECGLEAD_H
#include <iostream>
using namespace std;

class ECGLead
{
public:
    ECGLead();
    void operator=(const ECGLead& EcLead);
    ECGLead(const ECGLead& EcLead);
    bool init();
    bool print();
    ~ECGLead();
private:
    int *m_l;
};

#endif // ECGLEAD_H
