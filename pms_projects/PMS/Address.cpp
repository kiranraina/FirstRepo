#include "Address.h"

Address::Address()
{
    cout<<" Address constructor"<<endl;

  init();
}
Address::~Address()
{
    cout<<" Address destructor"<<endl;

}
int Address::getPlot()const{
    cout<<" Address getPlot"<<endl;
    return m_plotNumber;
}
void Address::setPlot(const int plotno){
    cout<<" Address setPlot"<<endl;
    this->m_plotNumber=plotno;
}

string Address::getCross()const{
    cout<<" Address getCross"<<endl;
    return m_cross;
}
void Address::setCross(const int cross){
    cout<<" Address setCross"<<endl;
    this->m_cross=cross;
}

string Address::getMain()const{
    cout<<" Address getMain"<<endl;
    return m_main;
}
void Address::setMain(const int main){
    cout<<" Address setMain"<<endl;
    this->m_main=main;
}


string Address::getLandMark()const{
    cout<<" Address getLandMark"<<endl;
    return m_landMark;
}
void Address::setLandMark(const int landmark){
    cout<<" Address setLandMark"<<endl;
    this->m_landMark=landmark;
}


string Address::getArea()const{
    cout<<" Address getArea"<<endl;
    return m_area;
}
void Address::setArea(const int area){
    cout<<" Address setArea"<<endl;
    this->m_area=area;
}


string Address::getCity()const{
    cout<<" Address getCity"<<endl;
    return m_city;
}
void Address::setCity(const int city){
    cout<<" Address setCity"<<endl;
    this->m_city=city;
}


int Address::getPincode()const{
    cout<<" Address getPincode"<<endl;
    return m_pincode;
}
void Address::setPincode(const int pincode){
    cout<<" Address setPincode"<<endl;
    this->m_pincode=pincode;
}
bool Address::print(){
cout<<"address print function"<<endl;
    cout<<"m_plotNumber"<<m_plotNumber<<endl<<"m_cross"<<m_cross<<endl<<"m_landMark"<<m_landMark<<endl<<"m_area"<<m_area<<endl<<"m_city"<<m_city<<endl<<"m_pincode"<<m_pincode<<endl;
}
bool Address::init(){
    cout<<"address init function"<<endl;
    m_plotNumber=123;
    m_cross="1st main";
    m_landMark="rr nagar";
    m_area="rr nagar";
    m_city="banlore";
    m_pincode=9876543;
}
