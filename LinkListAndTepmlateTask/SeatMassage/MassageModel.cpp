#include "MassageModel.h"
MassageModel *MassageModel::m_massageprogram=nullptr;
MassageModel::MassageModel()
{
    cout<<"MassageModel constructor called"<<endl;
    this->init();
}
MassageModel::~MassageModel()
{
    cout<<"MassageModel destructor called"<<endl;
}

void MassageModel::init()
{
    cout<<"MassageModel init called"<<endl;
    m_MapMassageprogram=new map<Massage_ID,MassageProgram*>;
    for(int i=1;i<11;i++){
        m_program=new MassageProgram;
        m_program->setId(i);
        m_program->setMassageName(m_program->m_massageNames->at(i-1));
        m_MapMassageprogram->insert({m_program->getId(),m_program});
    }
}

bool MassageModel::startMassage()
{
    while (1) {
        cout << "Select which massge you want to apply:" << endl;
        this->print();
        cout<< "----------------------------------"<<endl;
        int massageType;
        cin>> massageType;
        map<Massage_ID,MassageProgram*> :: iterator it;
        for (it=m_MapMassageprogram->begin();it!=m_MapMassageprogram->end();it++) {
            pair<Massage_ID,MassageProgram*> mpair = *it;
            if(mpair.first==massageType) {
                while(1) {
                    cout << mpair.second->getMassageName() <<" is Selected" << endl;
                    cout << "select seat to apply massage" << endl;
                    cout << "select 1 for Driver seat" << endl;
                    cout << "select 2 for Passenger seat" << endl;
                    cout << "select 3 to go for Massage list" << endl;
                    cout<< "----------------------------------"<<endl;
                    cin>>m_positionSelect;
                    if(m_positionSelect==DRIVER) {
                        repeateOn:
                        cout << "slect 1 for OFF and 2 for ON" << endl;
                        cout<< "Currecnt status: " <<mpair.second->getLeftSeat()->getactiveStatus() << endl;
                        cin>>m_flag;
                        if(m_flag==ON) {
                            if(mpair.second->getLeftSeat()->getactiveStatus()==true) {
                                goto repeateOn;
                            }
                        this->toggleStatus(mpair.second->getLeftSeat());
                        cout << mpair.second->getMassageName() <<" is applied to Driver seat and status is: "<< mpair.second->getLeftSeat()->getactiveStatus() << endl;
                        }
                        if(m_flag==OFF) {
                            if(mpair.second->getLeftSeat()->getactiveStatus()==false) {
                                goto repeateOn;
                            }
                            this->toggleStatus(mpair.second->getLeftSeat());
                            cout << mpair.second->getMassageName() <<" is applied to Driver seat and sttus is: "<< mpair.second->getLeftSeat()->getactiveStatus() << endl;
                        }
                        this->statusOfAllDriverSeat();
                        this->statusOfAllPassangerSeat();
                        m_currentSeat = mpair.second->getLeftSeat();
                        map<Massage_ID,MassageProgram*> :: iterator it1;
                        it1=m_MapMassageprogram->begin();
                        while (it1!=m_MapMassageprogram->end()) {
                            pair<Massage_ID,MassageProgram*> allpair1 = *it1;
                            if(allpair1.second->getLeftSeat()!=m_currentSeat) {
                                allpair1.second->getLeftSeat()->setActiveStatus(false);
                            }
                            it1++;
                        }
                        while(1) {
                            cout << "select 1 to Disable or 2 to Eanable the intencity" << endl;
                            cout << "Current intensity " << mpair.second->getLeftSeat()->getIntensity()<<endl;
                            cin>>m_IntensitySelect;
                            if(m_IntensitySelect==SOFT) {
                                map<Massage_ID,MassageProgram*> :: iterator it1;
                                it1=m_MapMassageprogram->begin();
                                while (it1!=m_MapMassageprogram->end()) {
                                    pair<Massage_ID,MassageProgram*> mpair1 = *it1;
                                    mpair1.second->getLeftSeat()->setIntensity(SOFT);
                                    it1++;
                                }
                                this->togglIntensity(mpair.second->getLeftSeat());
                                break;
                            }
                            if(m_IntensitySelect==HARD) {
                                map<Massage_ID,MassageProgram*> :: iterator it1;
                                it1=m_MapMassageprogram->begin();
                                while (it1!=m_MapMassageprogram->end()) {
                                    pair<Massage_ID,MassageProgram*> mpair1 = *it1;
                                    mpair1.second->getLeftSeat()->setIntensity(HARD);
                                    it1++;
                                }
                                this->togglIntensity(mpair.second->getLeftSeat());
                                break;
                            }
                            else {
                                break;
                            }
                            break;
                        }
                        break;
                    }
                    if(m_positionSelect==seatPosition::PASSENGER) {
                        this->toggleStatus(mpair.second->getRightSeat());
                        cout << mpair.second->getMassageName() <<" is applied to Passanger seat and status is: "<< mpair.second->getRightSeat()->getactiveStatus() << endl;
                        this->statusOfAllPassangerSeat();
                        this->statusOfAllDriverSeat();
                        m_currentSeat = mpair.second->getRightSeat();
                        map<Massage_ID,MassageProgram*> :: iterator it1;
                        it1=m_MapMassageprogram->begin();
                        while (it1!=m_MapMassageprogram->end()) {
                            pair<Massage_ID,MassageProgram*> allpair1 = *it1;
                            if(allpair1.second->getRightSeat()!=m_currentSeat) {
                                allpair1.second->getRightSeat()->setActiveStatus(false);
                            }
                            it1++;
                        }
                        while(1) {
                            cout << "Crrent intensity " << mpair.second->getRightSeat()->getIntensity()<<endl;
                            cout << "select 1 to Disable or 2 to Eanable the intencity" << endl;
                            cin>>m_IntensitySelect;
                            //                            cout << "Intensity before: "<<mpair.second->getLeftSeat()->getInntencityvalue() << endl;
                            if(m_IntensitySelect==SOFT) {
                                map<Massage_ID,MassageProgram*> :: iterator it1;
                                it1=m_MapMassageprogram->begin();
                                while (it1!=m_MapMassageprogram->end()) {
                                    pair<Massage_ID,MassageProgram*> mpair1 = *it1;
                                    mpair1.second->getRightSeat()->setIntensity(SOFT);
                                    it1++;
                                }
                                this->togglIntensity(mpair.second->getRightSeat());
                                break;
                            }
                            if(m_IntensitySelect==HARD) {
                                map<Massage_ID,MassageProgram*> :: iterator it1;
                                it1=m_MapMassageprogram->begin();
                                while (it1!=m_MapMassageprogram->end()) {
                                    pair<Massage_ID,MassageProgram*> mpair1 = *it1;
                                    mpair1.second->getRightSeat()->setIntensity(HARD);
                                    it1++;
                                }
                                this->togglIntensity(mpair.second->getRightSeat());
                                break;
                            }
                            else {
                                cout << "Invalid option plese select correct option"<< endl;
                                break;
                            }
                            break;
                        }
                        break;
                    }
                    else {
                        cout << "Invalid option plese select correct option"<< endl;
                        break;
                    }
                }
            }
        }
        if(massageType==0){
            return false;
        }
    }
    }


void MassageModel::print()
{
    cout<<"MassageModel print called"<<endl;

    it=m_MapMassageprogram->begin();
    while(it!=m_MapMassageprogram->end()){
       pair<Massage_ID,MassageProgram*> massageProgramPair=*it;
        cout<<massageProgramPair.first<<"."<<massageProgramPair.second->getMassageName()<<endl;
        it++;
    }
}

bool MassageModel::toggleStatus(MassageRecord *mr)
{
    cout<<"MassageModel toggleStatus called"<<endl;
        mr->setActiveStatus(!mr->getactiveStatus());
        cout<<"message active status"<< mr->getactiveStatus()<<endl;
    return true;
}

bool MassageModel::togglIntensity(MassageRecord *mr)
{
    cout<<"MassageModel togglIntensity called"<<endl;
    if(mr->getIntensity()==SOFT){
    cout<<"togglIntensity is activated"<<mr->getIntensity()<<endl;
    }
    if(mr->getIntensity()==HARD){
        cout<<"Intensty Hard"<<mr->getIntensity()<<endl;
    }
    return true;
    }
void MassageModel::statusOfAllDriverSeat()
{
    cout << "Status of All Driver Seat:" << endl;
    map<Massage_ID,MassageProgram*>:: iterator it;
    it=m_MapMassageprogram->begin();
    while (it!=m_MapMassageprogram->end()) {
        pair<Massage_ID,MassageProgram*> massageProgramPair=*it;
        cout << massageProgramPair.first <<". " << massageProgramPair.second->getMassageName()<< " "<< massageProgramPair.second->getLeftSeat()->getactiveStatus() <<endl;
        it++;
    }
    cout<< "----------------------------------"<<endl;
}

void MassageModel::statusOfAllPassangerSeat()
{
    cout << "Status of All Passanger Seat:" << endl;
    map<Massage_ID,MassageProgram*>:: iterator it;
    it=m_MapMassageprogram->begin();
    while (it!=m_MapMassageprogram->end()) {
        pair<Massage_ID,MassageProgram*> massageProgramPair=*it;
        cout << massageProgramPair.first <<". " << massageProgramPair.second->getMassageName()<< " "<< massageProgramPair.second->getRightSeat()->getactiveStatus() <<endl;
        it++;
    }
    cout<< "----------------------------------"<<endl;
}

MassageModel *MassageModel::getInstance()
{
    cout<<"MassageModel getInstance called"<<endl;
    if(m_massageprogram==nullptr){
        m_massageprogram=new MassageModel;
    }
    return m_massageprogram;
}
