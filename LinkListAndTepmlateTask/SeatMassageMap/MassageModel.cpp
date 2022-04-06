#include "MassageModel.h"

MassageModel *MassageModel::m_massageprogram=nullptr;
int MassageModel::count=0;
MassageModel::MassageModel()
{
    cout<<"MassageModel constructor called"<<endl;
}
MassageModel::~MassageModel()
{
    cout<<"MassageModel destructor called"<<endl;
}

void MassageModel::init()
{
    cout<<"MassageModel init called"<<endl;
    m_MapMassageprogram=new map<Massage_ID,MassageProgram*>;
    for(int i=1;i<=10;i++)
    {
        m_program=new MassageProgram;
        m_program->setMassage_id(i);
        m_MapMassageprogram->insert({m_program->getMassage_id(),m_program});
    }
    for(it=m_MapMassageprogram->begin();it!=m_MapMassageprogram->end();it++)
    {
        pair<Massage_ID,MassageProgram*>m_node=*it;
        if(m_node.first==Classic){
            m_node.second->setMassageName("ClassicMassage");
        }
        else if(m_node.first==Relaxing){
            m_node.second->setMassageName("RelaxingMassage");
        }
        else if(m_node.first==Mobilizng){
            m_node.second->setMassageName("MobilizngMassage");
        }
        else if(m_node.first==Activating){
            m_node.second->setMassageName("ActivatingMassage");
        }
        else if(m_node.first==HotRelaxingBack){
            m_node.second->setMassageName("HotRelaxingBackMassage");
        }
        else if(m_node.first==HotRelaxingShoulder){
            m_node.second->setMassageName("HotRelaxingShoulderMassage");
        }
        else if(m_node.first==Wave){
            m_node.second->setMassageName("WaveMassage");
        }
        else if(m_node.first==calf){
            m_node.second->setMassageName("calfMassage");
        }
        else if(m_node.first==DeepWaves){
            m_node.second->setMassageName("DeepWavesMassage");
        }
        else if(m_node.first==DeepWorkout){
            m_node.second->setMassageName("DeepWorkoutMassage");
        }
        else{
            cout<<"Entered number is invalid"<<endl;
        }
    }
      cout<<"MassageModel init  function finishied"<<endl;
}

bool MassageModel::startMassage()
{
    cout<<"startMassage fuction called"<<endl;
    cout<<"1.Classic\n"<<"2.Relaxing\n"<<"3.Mobilizing\n"<<"4.Activating\n"<<"5.HotBack\n"<<"6.HotShoulder\n"<<
          "7.Wave\n"<<"8.Calve\n"<<"9.DeepWave\n"<<"10.DeepWorkout"<<endl;
    cout<<"enter which massage want "<<endl;
    cin>>m_massageSelect;

    for(it=m_MapMassageprogram->begin();it!=m_MapMassageprogram->end();it++){
        pair<Massage_ID,MassageProgram*>m_pair=*it;
        if(m_pair.first==m_massageSelect){
            cout<<m_pair.second->getMassageName()<<" actived"<<endl;
            cout<<"Remain Massage are deactivated"<<endl;
            m_pair.second->init(this);
        }
    }
    cout<<"intensity set all massage same"<<endl;
    for(it=m_MapMassageprogram->begin();it!=m_MapMassageprogram->end();it++){
        pair<Massage_ID,MassageProgram*>m_pair=*it;
        MassageRecord *record=new MassageRecord;
         this->togglIntensity(record);
    }
}


void MassageModel::print()
{
    cout<<"MassageModel print called"<<endl;
}

bool MassageModel::toggleStatus(MassageRecord *mRecord)
{
    cout<<"MassageModel toggleStatus called"<<endl;
    mRecord->setActiveStatus(true);
    return true;
}

bool MassageModel::togglIntensity(MassageRecord *mRecord)
{
    cout<<"MassageModel togglIntensity called"<<endl;
    cout<<"Enter which Intensity you want"<<endl;
    if(count==0){

        cin>>m_seatIntensity;
        m_inten=m_seatIntensity;
    }
    else
    {
      m_seatIntensity=m_inten;
    }
    count++;
    mRecord->setIntensity(m_seatIntensity);
    return true;
}


MassageModel *MassageModel::getInstance()
{
    cout<<"MassageModel getInstance called"<<endl;
    if(m_massageprogram==nullptr){
        m_massageprogram=new MassageModel;
    }
    return m_massageprogram;
}
