#ifndef MASSAGERECORD_H
#define MASSAGERECORD_H
#include <iostream>
using namespace std;

enum Intensity{
    SOFT=1,
    HARD
};
enum seatPosition {
  DRIVER=1,
  PASSENGER
};

class MassageRecord
{

public:
    MassageRecord();
    ~MassageRecord();

    bool getActivateStatus()const;
    void setActivateStatus(const bool activateStatus);

    Intensity getIntensity()const;
    void setIntensity(const Intensity intensity);

    seatPosition getSeatPosition() const;
    void setSeatPosition(seatPosition  data);

private:
    bool m_activeStatus;
    Intensity m_intensity=Intensity::SOFT;
    seatPosition m_seatPosition=seatPosition::DRIVER;

};

#endif // MASSAGERECORD_H
