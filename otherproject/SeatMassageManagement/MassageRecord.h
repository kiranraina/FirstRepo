#ifndef MASSAGERECORD_H
#define MASSAGERECORD_H
#include <iostream>

using namespace std;

enum Intensity {
    SOFT=1,HARD
};
enum SeatPosition {
    DRIVER=1,PASSENGER
};
class MassageRecord
{


public:
    MassageRecord();
    ~MassageRecord();

    Intensity getInntencityvalue() const;
    void setInntencityvalue(const Intensity &value);

    bool getActiveStatus() const;
    void setActiveStatus(bool activeStatus);

    SeatPosition getPosition() const;
    void setPosition(const SeatPosition &value);

private:
    Intensity inntencityvalue=Intensity::SOFT;
    SeatPosition position=SeatPosition::DRIVER;
    bool m_activeStatus;
};
#endif // MASSAGERECORD_H
