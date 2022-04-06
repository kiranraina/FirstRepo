#ifndef BAG_H
#define BAG_H
#include<iostream>
using namespace std;

class Bag
{
public:
    Bag();
    ~Bag();
    bool init();
    bool print();
    string getName()const;
    void setName(const string name);
    int getZip()const;
    void setZip(const int zip);
    string getHeight() const;
    void setHeight(const string value);

    string getMaterial() const;
    void setMaterial(const string value);

private:
    string m_name;
    int m_no_zip;
    string m_height;
    string m_material;
};

#endif // BAG_H
