#include "DisplayHardware.h"
#include<Dispaly_8_inch.h>
#include<Dispaly_10_inch.h>
#include<Display_12_inch.h>

DisplayHardware::DisplayHardware(int x):m_chooseDisplay(x)
{
    cout<<"DisplayHardware parameter constructor called"<<endl;
    m_display8=nullptr;
    m_display10=nullptr;
    m_display12=nullptr;
    this->init();
}
DisplayHardware::DisplayHardware(){
    cout<<"DisplayHardware constructor called"<<endl;
}
DisplayHardware::~DisplayHardware()
{
    cout<<"DisplayHardware destructor called"<<endl;
    if(m_display8!=nullptr){
        delete m_display8;
    }
    else if(m_display10!=nullptr){
        delete m_display10;
    }
    else if(m_display10!=nullptr){
        delete m_display12;
    }
}
void DisplayHardware::init()
{
    cout<<"DisplayHardware init called"<<endl;
    switch (m_chooseDisplay) {
    case DISPLAY_8INCH:
        cout<<"DISPLAY_8INCH started called*************************************"<<endl;
        if(m_display8==nullptr){
            m_display8= new Dispaly_8_inch;
        }
        cout<<"DISPLAY_8INCH finished called*************************************"<<endl;
        break;
    case DISPLAY_10INCH:
        cout<<"DISPLAY_10INCH started called*************************************"<<endl;
        if(m_display10==nullptr){
            m_display10=new Dispaly_10_inch;
        }
        cout<<"DISPLAY_10INCH finished called*************************************"<<endl;
        break;
    case DISPLAY_12INCH:
        cout<<"DISPLAY_12INCH started called*************************************"<<endl;
        if(m_display12==nullptr){
            m_display12=new Display_12_inch;
        }
        cout<<"DISPLAY_12INCH finised called*************************************"<<endl;
        break;
    default:
        cout<<"invalid number"<<endl;
        break;
    }
}

void DisplayHardware::print()
{
    cout<<"DisplayHardware print called"<<endl;
}
