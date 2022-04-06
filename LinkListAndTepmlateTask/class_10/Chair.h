#ifndef CHAIR_H
#define CHAIR_H
#include<iostream>
#include<string>
using namespace std;

class Chair
{
public:
    Chair();
    ~Chair();
    bool print();
    bool init();

    string getwheel() const;
    void setWheel(const string wheel);

    string getColor() const;
    void setColor(const string value);

    string getMaterial() const;
    void setMaterial(const string value);

    string getHeight_extender() const;
    void setHeight_extender(const string value);

    string getArm_rest() const;
    void setArm_rest(const string value);

private:
    string m_wheel;
    string color;
    string material;
    string height_extender;
    string arm_rest;
};

#endif // CHAIR_H
