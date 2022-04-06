#ifndef ECGSYSTEM_H
#define ECGSYSTEM_H
#include "ECGLead.h"

class ECGSystem
{
public:
    ECGSystem();
    bool init();
    bool print();
    ~ECGSystem();
private:
    ECGLead **m_ecgLead;
};

#endif // ECGSYSTEM_H
