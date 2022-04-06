#include "Chair.h"

Chair::Chair()
{
cout<<"Chair constructor called";
}
Chair::~Chair()
{
cout<<"Chair destructor called";
}
bool Chair::init()
{
cout<<"Chair init called";
 return true;
}

string Chair::getColor() const
{
    return color;
}

string Chair::getMaterial() const
{
    return material;
}

void Chair::setMaterial(const string value)
{
    material = value;
}

string Chair::getHeight_extender() const
{
    return height_extender;
}

string Chair::getArm_rest() const
{
    return arm_rest;
}

void Chair::setArm_rest(const string value)
{
    arm_rest = value;
}

void Chair::setHeight_extender(const string value)
{
    height_extender = value;
}

void Chair::setColor(const string value)
{
    color = value;
}

string Chair::getwheel()const
{
    return m_wheel;
}

void Chair::setWheel(const string wheel)
{
    m_wheel= wheel;
}
bool Chair::print()
{
cout<<"Chair print called";
 return true;
}


