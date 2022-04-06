#include "Address.h"

Address::Address()
{
    cout<<"constructor"<<endl;
//  m_plotNumber =plotno;
//  m_cross =cross;
  init();
}
int Address::getPlot()const{
    return m_plotNumber;
}
void Address::setPlot(const int plotno){
    this->m_plotNumber=plotno;
}

string Address::getCross()const{
    return m_cross;
}
void Address::setCross(const int cross){
    this->m_cross=cross;
}

string Address::getMain()const{
    return m_main;
}
void Address::setMain(const int main){
    this->m_main=main;
}


string Address::getLandMark()const{
    return m_landMark;
}
void Address::setLandMark(const int landmark){
    this->m_landMark=landmark;
}


string Address::getArea()const{
    return m_area;
}
void Address::setArea(const int area){
    this->m_area=area;
}


string Address::getCity()const{
    return m_city;
}
void Address::setCity(const int city){
    this->m_city=city;
}


int Address::getPincode()const{
    return m_pincode;
}
void Address::setPincode(const int pincode){
    this->m_pincode=pincode;
}
bool Address::print(){
cout<<"print function"<<endl;
    cout<<"m_plotNumber"<<m_plotNumber<<endl<<"m_cross"<<m_cross<<endl<<"m_landMark"<<m_landMark<<endl<<"m_area"<<m_area<<endl<<"m_city"<<m_city<<endl<<"m_pincode"<<m_pincode<<endl;
}
bool Address::init(){
    cout<<"init function"<<endl;
    m_plotNumber=123;
    m_cross="1st main";
    m_landMark="rr nagar";
    m_area="rr nagar";
    m_city="banlore";
    m_pincode=9876543;
    print();




}
