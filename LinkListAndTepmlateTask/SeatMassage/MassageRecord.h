#ifndef MASSAGERECORD_H
#define MASSAGERECORD_H
#include"Commanutiles.h"


enum seatPosition{
    DRIVER=1,
    PASSENGER,
};
enum Intensity{
    SOFT=1,
    HARD,
};
class MassageRecord
{
public:
    MassageRecord();
    ~MassageRecord();

    void setActiveStatus(const bool activeStatus);
    bool getactiveStatus()const;


    Intensity getIntensity()const;
    void setIntensity(const Intensity intensity);

    void setSeatPosition(const seatPosition SeatPosition);
    seatPosition getSeatPosition() const;
private:
    bool m_activeStatus;
    Intensity m_intensity=Intensity::SOFT;
    seatPosition m_seatPosition=seatPosition::DRIVER;
};

#endif // MASSAGERECORD_H
