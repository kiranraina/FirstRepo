#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>

using namespace std;
class Address
{

     ~ Address();

public:
Address();
     int getPlot()const;
    void setPlot(const int plotno);
    string getCross()const;
    void setCross(const int cross);

    string getMain()const;
    void setMain(const int main);

    string getLandMark()const;
    void setLandMark(const int landmark);

    string getArea()const;
    void setArea(const int area);

    string getCity()const;
    void setCity(const int city);

    int getPincode()const;
    void setPincode(const int pincode);

    bool init();
    bool print();
private:
    int m_plotNumber;
    string m_cross;
    string m_main;
    string m_landMark;
    string m_area;
    string m_city;
    int m_pincode;
};

#endif // ADDRESS_H
