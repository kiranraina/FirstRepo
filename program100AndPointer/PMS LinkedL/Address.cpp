#include "Address.h"

Address::Address(int plotNumber, string cross,
                 string main, string landmark,
                 string area, string city, int pincode
                 )
{
    cout << endl << "Inside Address constructor"<<endl;
    m_plotNumber = plotNumber;
    m_cross = cross;
    m_main = main;
    m_landMark = landmark;
    m_area = area;
    m_city = city;
    m_pinCode = pincode;
}

Address::~Address()
{
    cout<<"Address Object is Destroyed"<<endl;
}




