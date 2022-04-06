#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>
using namespace std;
class Address
{
public:
    Address(
            int plotNumber,
            string cross,
            string main,
            string landmark,
            string area,
            string city,
            int pincode
            );

//    int getPlot() const;
//    void setPlot(const int plotno);
//    string getCross() const;
//    void setCross(const string cross);

//    string getMain() const;
//    void setMain(const string Main);

//    string getlandMark() const;
//    void setLandMark(const string LandMark);

//    string getarea() const;
//    void setArea(const string Area);

//    string getcity() const;
//    void setCity(const string newCity);

//    int getpinCode() const;
//    void setPinCode(int newPinCode);

    bool print();
    ~Address();
private:
    int m_plotNumber;
    string m_cross;
    string m_main;
    string m_landMark;
    string m_area;
    string m_city;
    int m_pinCode;
};

#endif // ADDRESS_H
