#ifndef AUDIOHARDWARE_H
#define AUDIOHARDWARE_H
#include<Commanutiles.h>
#include<INeedHardware.h>
#include<list>

class Woffer;
class Speaker;
class Twitts;
class Radio;

enum Vendors{
    VENDER1=1,
    VENDER2=2,
    VENDER3=3

};
class AudioHardWare :public INeedHardware
{

public:
    AudioHardWare();
    AudioHardWare(int y);
  virtual  ~AudioHardWare();
    void init();
    void print();
private:
    list<Woffer*>m_wofferlist;
    list<Woffer*>::iterator it1;
    list<Speaker*>m_speakerlist;
     list<Speaker*>::iterator it2;
    list<Twitts*>m_twittlist;
     list<Twitts*>::iterator it3;

    Woffer *m_woffer;
    Speaker *m_speaker;
    Radio *m_radio;
    Twitts *m_twitts;
    int vendor;
};

#endif // AUDIOHARDWARE_H
