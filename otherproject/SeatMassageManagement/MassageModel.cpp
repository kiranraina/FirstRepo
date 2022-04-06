#include "MassageModel.h"

MassageModel* MassageModel::m_massageModel=nullptr;
MassageModel::MassageModel()
{
    cout << "MassageModel Constructor" << endl;
    init();
}

MassageModel::~MassageModel()
{
    cout << "MassageModel Destructor" << endl;
}

bool MassageModel::toggleStatus(MassageRecord *massageR)
{

    massageR->setActiveStatus(!massageR->getActiveStatus());
    cout << "Active Status: " << massageR->getActiveStatus() <<  endl;
    return true;
}

void MassageModel::toggleIntensity(MassageRecord *massageR)
{
    if(massageR->getInntencityvalue()==SOFT){
        cout << "Intensity after: " << massageR->getInntencityvalue()<< endl;
    }
    if(massageR->getInntencityvalue()==HARD){
        cout << "Intensity after: " << massageR->getInntencityvalue()<< endl;
    }

}

void MassageModel::init()
{
    cout << "init-------------";
    m_progrogramMap = new map<MASSAGE_ID,MassageProgram*>;
    for(int i=1;i<11;i++)
    {
        m_massageProgram = new MassageProgram;
        m_massageProgram->setId(i);
        m_massageProgram->setMassageName(m_massageProgram->m_massageNames->at(i-1));
        m_progrogramMap->insert({m_massageProgram->getId(),m_massageProgram});
    }
}

void MassageModel::displayMassageProgramList()
{
    it=m_progrogramMap->begin();
    while (it!=m_progrogramMap->end()) {
        pair<MASSAGE_ID,MassageProgram*> massageProgramPair=*it;
        cout << massageProgramPair.first <<". " << massageProgramPair.second->getMassageName()<<endl;
        it++;
    }
}

void MassageModel::start()
{
    while (1) {
        cout << "Select which massge you want to apply:" << endl;
        this->displayMassageProgramList();
        cout<< "----------------------------------"<<endl;
        int massageType;
        cin>> massageType;
        map<MASSAGE_ID,MassageProgram*> :: iterator it;
        for (it=m_progrogramMap->begin();it!=m_progrogramMap->end();it++) {
            pair<MASSAGE_ID,MassageProgram*> mpair = *it;
            if(mpair.first==massageType) {
                while(1) {
                    cout << mpair.second->getMassageName() <<" is Selected" << endl;
                    cout << "select seat to apply massage" << endl;
                    cout << "select 1 for Driver seat" << endl;
                    cout << "select 2 for Passenger seat" << endl;
                    cout << "select 3 to go for Massage list" << endl;
                    cout<< "----------------------------------"<<endl;
                    cin>>spositon;
                    if(spositon==DRIVER) {
                        repeateOn:
                        cout << "slect 1 for OFF and 2 for ON" << endl;
                        cout<< "Currecnt status: " <<mpair.second->getLeftSeat()->getActiveStatus() << endl;
                        cin>>startStop;
                        if(startStop==ON) {
                            if(mpair.second->getLeftSeat()->getActiveStatus()==true) {
                                goto repeateOn;
                            }
                        this->toggleStatus(mpair.second->getLeftSeat());
                        cout << mpair.second->getMassageName() <<" is applied to Driver seat and status is: "<< mpair.second->getLeftSeat()->getActiveStatus() << endl;
                        }
                        if(startStop==OFF) {
                            if(mpair.second->getLeftSeat()->getActiveStatus()==false) {
                                goto repeateOn;
                            }
                            this->toggleStatus(mpair.second->getLeftSeat());
                            cout << mpair.second->getMassageName() <<" is applied to Driver seat and sttus is: "<< mpair.second->getLeftSeat()->getActiveStatus() << endl;
                        }
                        this->statusOfAllDriverSeat();
                        this->statusOfAllPassangerSeat();
                        m_currentSeat = mpair.second->getLeftSeat();
                        map<MASSAGE_ID,MassageProgram*> :: iterator it1;
                        it1=m_progrogramMap->begin();
                        while (it1!=m_progrogramMap->end()) {
                            pair<MASSAGE_ID,MassageProgram*> allpair1 = *it1;
                            if(allpair1.second->getLeftSeat()!=m_currentSeat) {
                                allpair1.second->getLeftSeat()->setActiveStatus(false);
                            }
                            it1++;
                        }
                        while(1) {
                            cout << "select 1 to Disable or 2 to Eanable the intencity" << endl;
                            cout << "Current intensity " << mpair.second->getLeftSeat()->getInntencityvalue()<<endl;
                            cin>>intensity;
                            if(intensity==SOFT) {
                                map<MASSAGE_ID,MassageProgram*> :: iterator it1;
                                it1=m_progrogramMap->begin();
                                while (it1!=m_progrogramMap->end()) {
                                    pair<MASSAGE_ID,MassageProgram*> mpair1 = *it1;
                                    mpair1.second->getLeftSeat()->setInntencityvalue(SOFT);
                                    it1++;
                                }
                                this->toggleIntensity(mpair.second->getLeftSeat());
                                break;
                            }
                            if(intensity==HARD) {
                                map<MASSAGE_ID,MassageProgram*> :: iterator it1;
                                it1=m_progrogramMap->begin();
                                while (it1!=m_progrogramMap->end()) {
                                    pair<MASSAGE_ID,MassageProgram*> mpair1 = *it1;
                                    mpair1.second->getLeftSeat()->setInntencityvalue(HARD);
                                    it1++;
                                }
                                this->toggleIntensity(mpair.second->getLeftSeat());
                                break;
                            }
                            else {
                                break;
                            }
                            break;
                        }
                        break;
                    }
                    if(spositon==SeatPosition::PASSENGER) {
                        this->toggleStatus(mpair.second->getRightSeat());
                        cout << mpair.second->getMassageName() <<" is applied to Passanger seat and status is: "<< mpair.second->getRightSeat()->getActiveStatus() << endl;
                        this->statusOfAllPassangerSeat();
                        this->statusOfAllDriverSeat();
                        m_currentSeat = mpair.second->getRightSeat();
                        map<MASSAGE_ID,MassageProgram*> :: iterator it1;
                        it1=m_progrogramMap->begin();
                        while (it1!=m_progrogramMap->end()) {
                            pair<MASSAGE_ID,MassageProgram*> allpair1 = *it1;
                            if(allpair1.second->getRightSeat()!=m_currentSeat) {
                                allpair1.second->getRightSeat()->setActiveStatus(false);
                            }
                            it1++;
                        }
                        while(1) {
                            cout << "Crrent intensity " << mpair.second->getRightSeat()->getInntencityvalue()<<endl;
                            cout << "select 1 to Disable or 2 to Eanable the intencity" << endl;
                            cin>>intensity;
                            //                            cout << "Intensity before: "<<mpair.second->getLeftSeat()->getInntencityvalue() << endl;
                            if(intensity==SOFT) {
                                map<MASSAGE_ID,MassageProgram*> :: iterator it1;
                                it1=m_progrogramMap->begin();
                                while (it1!=m_progrogramMap->end()) {
                                    pair<MASSAGE_ID,MassageProgram*> mpair1 = *it1;
                                    mpair1.second->getRightSeat()->setInntencityvalue(SOFT);
                                    it1++;
                                }
                                this->toggleIntensity(mpair.second->getRightSeat());
                                break;
                            }
                            if(intensity==HARD) {
                                map<MASSAGE_ID,MassageProgram*> :: iterator it1;
                                it1=m_progrogramMap->begin();
                                while (it1!=m_progrogramMap->end()) {
                                    pair<MASSAGE_ID,MassageProgram*> mpair1 = *it1;
                                    mpair1.second->getRightSeat()->setInntencityvalue(HARD);
                                    it1++;
                                }
                                this->toggleIntensity(mpair.second->getRightSeat());
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
            return;
        }
    }
}

void MassageModel::statusOfAllDriverSeat()
{
    cout << "Status of All Driver Seat:" << endl;
    map<MASSAGE_ID,MassageProgram*>:: iterator it;
    it=m_progrogramMap->begin();
    while (it!=m_progrogramMap->end()) {
        pair<MASSAGE_ID,MassageProgram*> massageProgramPair=*it;
        cout << massageProgramPair.first <<". " << massageProgramPair.second->getMassageName()<< " "<< massageProgramPair.second->getLeftSeat()->getActiveStatus() <<endl;
        it++;
    }
    cout<< "----------------------------------"<<endl;
}

void MassageModel::statusOfAllPassangerSeat()
{
    cout << "Status of All Passanger Seat:" << endl;
    map<MASSAGE_ID,MassageProgram*>:: iterator it;
    it=m_progrogramMap->begin();
    while (it!=m_progrogramMap->end()) {
        pair<MASSAGE_ID,MassageProgram*> massageProgramPair=*it;
        cout << massageProgramPair.first <<". " << massageProgramPair.second->getMassageName()<< " "<< massageProgramPair.second->getRightSeat()->getActiveStatus() <<endl;
        it++;
    }
    cout<< "----------------------------------"<<endl;
}

void MassageModel::intensityOfAllDriverSeat()
{

}

void MassageModel::intensityOfAllPassangerSeat()
{

}

MassageModel *MassageModel::getInstance()
{
    if(m_massageModel==nullptr) {
        m_massageModel = new MassageModel;
    }
    return m_massageModel;
}

