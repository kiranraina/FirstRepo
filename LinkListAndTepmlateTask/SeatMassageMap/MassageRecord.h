#ifndef MASSAGERECORD_H
#define MASSAGERECORD_H
#include"Commanutiles.h"

class MassageRecord
{
    enum seatPosition{
        DRIVER=1,
        PASSENGER,
    };
    enum Intensity{
        SOFT=1,
        HARD,
    };
public:
    MassageRecord();
    ~MassageRecord();
    void init();
    void print();

    bool getactiveStatus() const;
    void setActiveStatus(const bool activeStatus);

    int getintensity() ;
    void setIntensity(int intensity);

    void setSeatPosition(const int seatposition);
    int getSeatPosition()const;
private:
    bool m_activeStatus;
    int m_intensity;
    int m_seatPosition;


};

#endif // MASSAGERECORD_H
