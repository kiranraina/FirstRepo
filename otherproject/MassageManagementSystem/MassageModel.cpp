#include "MassageModel.h"
MassageModel *MassageModel::msgModelSingle = nullptr;
MassageModel::MassageModel(){
    std::cout << " Massage Model constructed " << std::endl;
    init();
}

MassageModel::~MassageModel()
{
    std::cout << " Massage Model Destroyed " << std::endl;
}

MassageModel *MassageModel::getMe(){
    if(!msgModelSingle){
        msgModelSingle = new MassageModel;
    }
    return msgModelSingle;
}

void MassageModel::toggleStatus(MassageRecord *rec)
{
    //    m_messageRec = rec;
    rec->setActivateStatus(!rec->getActivateStatus());
    cout << "Active Status: " <<endl;
        rec->getActivateStatus();

}

void MassageModel::toggleIntensity(MassageRecord *rec)
{
    if(rec->getIntensity()==SOFT){
    cout << "Toggle Intensity after "<< rec->getIntensity() << endl;
    }

    if(rec->getIntensity() == HARD){
        cout << " Intensity after " <<rec->getIntensity()<<endl;
    }
}

void MassageModel::start(){

    while (1) {
        cout << "Select which massge you want to apply:" << endl;
        this->print();
        cout<< "----------------------------------"<<endl;
        int massageType;
        cin>> massageType;
        map<MASSAGE_ID,MassageProgram*> ::iterator it;
        for (it=m_getMap->begin();it!=m_getMap->end();it++) {
            pair<MASSAGE_ID,MassageProgram*> mpair = *it;
            if(mpair.first==massageType) {
                while(1) {
                    cout << mpair.second->getMassageName() <<" is Selected" << endl;
                    cout << "select seat to apply massage" << endl;
                    cout << "select 1 for Driver seat" << endl;
                    cout << "select 2 for Passenger seat" << endl;
                    cout << "select 3 to go for Massage list" << endl;
                    cout<< "----------------------------------"<<endl;
                    cin>>m_seatChoice;
                    if(m_seatChoice==DRIVER) {
                        repeateOn:
                        cout << "slect 1 for OFF and 2 for ON" << endl;
                        cout<< "Currecnt status: " <<mpair.second->getLeftSeat()->getActivateStatus() << endl;
                        cin>>m_flag;
                        if(m_flag==ON) {
                            if(mpair.second->getLeftSeat()->getActivateStatus()==true) {
                                goto repeateOn;
                            }
                        this->toggleIntensity(mpair.second->getLeftSeat());
                        cout << mpair.second->getMassageName() <<" is applied to Driver seat and status is: "<< mpair.second->getLeftSeat()->getActivateStatus() << endl;
                        }
                        if(m_flag==OFF) {
                            if(mpair.second->getLeftSeat()->getActivateStatus()==false) {
                                goto repeateOn;
                            }
                            this->toggleStatus(mpair.second->getLeftSeat());
                            cout << mpair.second->getMassageName() <<" is applied to Driver seat and sttus is: "<< mpair.second->getLeftSeat()->getActivateStatus() << endl;
                        }
                        this->statusOfAllDriverSeat();
                        this->statusOfAllPassangerSeat();
                        m_currentseat = mpair.second->getLeftSeat();
                        map<MASSAGE_ID,MassageProgram*> :: iterator it1;
                        it1=m_getMap->begin();
                        while (it1!=m_getMap->end()) {
                            pair<MASSAGE_ID,MassageProgram*> allpair1 = *it1;
                            if(allpair1.second->getLeftSeat()!=m_currentseat) {
                                allpair1.second->getLeftSeat()->setActivateStatus(false);
                            }
                            it1++;
                        }
                        while(1) {
                            cout << "select 1 to Disable or 2 to Eanable the intencity" << endl;
                            cout << "Current intensity " << mpair.second->getLeftSeat()->getIntensity()<<endl;
                            cin>>m_seatIntensity;
                            if(m_seatIntensity==SOFT) {
                                map<MASSAGE_ID,MassageProgram*> :: iterator it1;
                                it1=m_getMap->begin();
                                while (it1!=m_getMap->end()) {
                                    pair<MASSAGE_ID,MassageProgram*> mpair1 = *it1;
                                    mpair1.second->getLeftSeat()->setIntensity(SOFT);
                                    it1++;
                                }
                                this->toggleIntensity(mpair.second->getLeftSeat());
                                break;
                            }
                            if(m_seatIntensity==HARD) {
                                map<MASSAGE_ID,MassageProgram*> :: iterator it1;
                                it1=m_getMap->begin();
                                while (it1!=m_getMap->end()) {
                                    pair<MASSAGE_ID,MassageProgram*> mpair1 = *it1;
                                    mpair1.second->getLeftSeat()->setIntensity(HARD);
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
                    if(m_seatChoice==seatPosition::PASSENGER) {
                        this->toggleStatus(mpair.second->getRightSeat());
                        cout << mpair.second->getMassageName() <<" is applied to Passanger seat and status is: "<< mpair.second->getRightSeat()->getActivateStatus() << endl;
                        this->statusOfAllPassangerSeat();
                        this->statusOfAllDriverSeat();
                        m_currentseat = mpair.second->getRightSeat();
                        map<MASSAGE_ID,MassageProgram*> :: iterator it1;
                        it1=m_getMap->begin();
                        while (it1!=m_getMap->end()) {
                            pair<MASSAGE_ID,MassageProgram*> allpair1 = *it1;
                            if(allpair1.second->getRightSeat()!=m_currentseat) {
                                allpair1.second->getRightSeat()->setActivateStatus(false);
                            }
                            it1++;
                        }
                        while(1) {
                            cout << "Crrent intensity " << mpair.second->getRightSeat()->getIntensity()<<endl;
                            cout << "select 1 to Disable or 2 to Eanable the intencity" << endl;
                            cin>>m_seatIntensity;
                            //                            cout << "Intensity before: "<<mpair.second->getLeftSeat()->getInntencityvalue() << endl;
                            if(m_seatIntensity==SOFT) {
                                map<MASSAGE_ID,MassageProgram*> :: iterator it1;
                                it1=m_getMap->begin();
                                while (it1!=m_getMap->end()) {
                                    pair<MASSAGE_ID,MassageProgram*> mpair1 = *it1;
                                    mpair1.second->getRightSeat()->setIntensity(SOFT);
                                    it1++;
                                }
                                this->toggleIntensity(mpair.second->getRightSeat());
                                break;
                            }
                            if(m_seatIntensity==HARD) {
                                map<MASSAGE_ID,MassageProgram*> :: iterator it1;
                                it1=m_getMap->begin();
                                while (it1!=m_getMap->end()) {
                                    pair<MASSAGE_ID,MassageProgram*> mpair1 = *it1;
                                    mpair1.second->getRightSeat()->setIntensity(HARD);
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

void MassageModel::init(){

    cout << " Inside init function of message Model " << endl;
    m_getMap = new map<MASSAGE_ID,MassageProgram*>;
    for(int i=1;i<11;i++)
    {
        m_massageProgram = new MassageProgram;
        m_massageProgram->setId(i);
        m_massageProgram->setMassageName(m_massageProgram->massageNames->at(i-1));
        m_getMap->insert({m_massageProgram->getId(),m_massageProgram});
    }

}
void MassageModel::statusOfAllDriverSeat()
{
    cout << "Status of All Driver Seat:" << endl;
    map<MASSAGE_ID,MassageProgram*>:: iterator it;
    it=m_getMap->begin();
    while (it!=m_getMap->end()) {
        pair<MASSAGE_ID,MassageProgram*> massageProgramPair=*it;
        cout << massageProgramPair.first <<". " << massageProgramPair.second->getMassageName()<< " "<< massageProgramPair.second->getLeftSeat()->getActivateStatus() <<endl;
        it++;
    }
    cout<< "----------------------------------"<<endl;
}

void MassageModel::statusOfAllPassangerSeat()
{
    cout << "Status of All Passanger Seat:" << endl;
    map<MASSAGE_ID,MassageProgram*>:: iterator it;
    it=m_getMap->begin();
    while (it!=m_getMap->end()) {
        pair<MASSAGE_ID,MassageProgram*> massageProgramPair=*it;
        cout << massageProgramPair.first <<". " << massageProgramPair.second->getMassageName()<< " "<< massageProgramPair.second->getRightSeat()->getActivateStatus() <<endl;
        it++;
    }
    cout<< "----------------------------------"<<endl;
}
void MassageModel::print(){
    it=m_getMap->begin();
    while(it!=m_getMap->end()){
         pair<MASSAGE_ID,MassageProgram*> massageProgramPair=*it;
        cout << massageProgramPair.first << " ." << massageProgramPair.second->getMassageName() <<endl;
        it++;
    }
}
