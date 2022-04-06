#include "ECGLeads.h"

ECGLeads::ECGLeads()
{
    cout<<"ECG Leads Initialized:"<<endl;
}

ECGLeads::~ECGLeads()
{
    cout << "ECG Leads Distroctor called"<<endl;
}

int ECGLeads::getLeads() const
{
    return leads;
}

ECGLeads::ECGLeads(const ECGLeads &leads)
{
   cout << "Lead copy constructor" << endl;
}

void ECGLeads::setLeads(int Leads)
{
    leads = Leads;
}
