#include "AudioHardWare.h"
#include<Woffer.h>
#include<Speaker.h>
#include<Radio.h>
#include<Twitts.h>
AudioHardWare::AudioHardWare(int y):vendor(y)
{
    cout<<"AudioHardWare parameter constructor called"<<endl;
    this->init();
    m_speaker=nullptr;
    m_woffer=nullptr;
    m_twitts=nullptr;
}
AudioHardWare::AudioHardWare(){
    cout<<"AudioHardware constructor called"<<endl;
}
AudioHardWare::~AudioHardWare()
{
    cout<<"AudioHardWare destructor called"<<endl;
    it2=m_speakerlist.begin();
    while (it2!=m_speakerlist.end()) {
        if(*it2!=nullptr){
        delete(*it2);
        }
        it2++;
    }
    it3=m_twittlist.begin();
    while (it3!=m_twittlist.end()) {
        if(*it3!=nullptr){
        delete(*it3);
        cout<<"twitts destructor called"<<endl;
        }
        it3++;
    }
    it1=m_wofferlist.begin();
    while (it1!=m_wofferlist.end()) {
        if(*it1!=nullptr){
        delete(*it1);
        cout<<"woffer destructor called"<<endl;
        }
        it1++;
    }

}
void AudioHardWare::init()
{
    cout<<"AudioHardWare init called"<<endl;
    switch (vendor) {
    case VENDER1:
        cout<<"vendor1 speakers started//////////////////////////////////////////////////////////"<<endl;
        for(int speaker=0;speaker<4;speaker++){
            m_speaker=new Speaker;
            m_speakerlist.push_back(m_speaker);
        }
        cout<<"vendor1 twits started//////////////////////////////////////////////////////////"<<endl;
        for(int twits=0;twits<2;twits++){
            m_twitts=new Twitts;
            m_twittlist.push_back(m_twitts);
        }
        break;
    case VENDER2:
        cout<<"vendor2 speaker started//////////////////////////////////////////////////////////"<<endl;
        for(int speaker=0;speaker<6;speaker++){
            m_speaker=new Speaker;
            m_speakerlist.push_back(m_speaker);
        }
        cout<<"vendor2 twits started//////////////////////////////////////////////////////////"<<endl;
        for(int twits=0;twits<4;twits++){
            m_twitts=new Twitts;
            m_twittlist.push_back(m_twitts);
        }
        cout<<"vendor2 woffer started//////////////////////////////////////////////////////////"<<endl;
        for(int woffer=0;woffer<1;woffer++){
            m_woffer=new Woffer;
            m_wofferlist.push_back(m_woffer);
        }
        break;
    case VENDER3:
        cout<<"vendor3 speaker started//////////////////////////////////////////////////////////"<<endl;
        for(int speaker=0;speaker<8;speaker++){
            m_speaker=new Speaker;
            m_speakerlist.push_back(m_speaker);
        }
        cout<<"vendor3 twits started//////////////////////////////////////////////////////////"<<endl;
        for(int twits=0;twits<6;twits++){
            m_twitts=new Twitts;
            m_twittlist.push_back(m_twitts);
        }
        cout<<"vendor3 woffer started//////////////////////////////////////////////////////////"<<endl;
        for(int woffer=0;woffer<1;woffer++){
            m_woffer=new Woffer;
            m_wofferlist.push_back(m_woffer);
        }
        break;
    default:
        cout<<"invalid number enternd"<<endl;
        break;
    }
}

void AudioHardWare::print()
{
    cout<<"AudioHardWare print called"<<endl;
}
