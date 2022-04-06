#include "Bag.h"

Bag::Bag()
{
   cout<<"Bag constructor called";
}
Bag::~Bag()
{
   cout<<"Bag destructor called";
}
bool Bag::init()
{
   cout<<"Bag init called";
   return true;
}
bool Bag::print()
{
   cout<<"Bag print called";
   return true;
}

string Bag::getName() const
{
    return m_name;
}

void Bag::setName(const string name)
{
    m_name=name;
}

int Bag::getZip() const
{
    return m_no_zip;
}

void Bag::setZip(const int zip)
{
    m_no_zip=zip;
}

string Bag::getHeight() const
{
    return m_height;
}

string Bag::getMaterial() const
{
    return m_material;
}

void Bag::setMaterial(const string value)
{
    m_material = value;
}

void Bag::setHeight(const string value)
{
    m_height = value;
}
