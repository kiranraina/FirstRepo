#ifndef ECGLEADS_H
#define ECGLEADS_H
#include "ECGSystem.h"
#include <iostream>
using namespace std;

class ECGLeads
{
public:
    ECGLeads();
    ~ECGLeads();
    int getLeads() const;

    ECGLeads(const ECGLeads& leads);
    void setLeads(const int Leads);

private:
    int leads;
    ECGSystem *m_ecgsystem;
};

#endif // ECGLEADS_H
