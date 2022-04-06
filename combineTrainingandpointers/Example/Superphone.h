#ifndef SUPERPHONE_H
#define SUPERPHONE_H
#include "Phone.h"


class SuperPhone:public Phone
{
public:
    SuperPhone();
   ~SuperPhone();
    void Videocall();

    string os() const;
    void setOs(const string &os);

    string simcardType() const;
    void setSimcardType(const string &simcardType);

    int camPixels() const;
    void setCamPixels(int camPixels);
    void sendMessage();
    void addFeatures(string brand,string color);

private:
    string m_os,m_simcardType;
    int m_camPixels;
};

#endif // SUPERPHONE_H
