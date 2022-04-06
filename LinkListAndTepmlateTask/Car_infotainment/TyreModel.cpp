#include "TyreModel.h"
TyreModel* TyreModel::m_tyremodel1=nullptr;
TyreModel::TyreModel()
{
cout<<"TyreModel constructor called"<<endl;
this->initTyre();
}
TyreModel::~TyreModel()
{

    cout<<"TyreModel destructor called"<<endl;
//    delete m_tyremodel1;
    cout<<"m_tyremodel1 destructor called"<<endl;
   delete m_tyre[3];
    cout<<"m_tyre[3] destructor called"<<endl;
   delete m_tyre[2];
     cout<<"m_tyre[2] destructor called"<<endl;
   delete m_tyre[1];
      cout<<"m_tyre[1] destructor called"<<endl;
   delete m_tyre[0];
      cout<<"m_tyre[0] destructor called"<<endl;
}

TyreModel* TyreModel::getTyremodel()
{
      cout<<"TyreModel gettyremodel called"  <<endl;
      if(m_tyremodel1==nullptr){
          m_tyremodel1=new TyreModel;
          return m_tyremodel1;
      }
}

void TyreModel::RecvAirPressure(int x, int airpressure)
{
    cout<<"TyreModel RecvAirPressure called"<<x<<" "<<airpressure<<endl;
}

void TyreModel::Recvwheel(int x, bool wheel)
{
    cout<<"TyreModel Recvwheel called"<<x<<" "<<wheel<<endl;
}

void TyreModel::Recvairleakage(int x, bool airleakage)
{
    cout<<"TyreModel Recvairleakage called"<<x<<" "<<airleakage<<endl;
}

void TyreModel::RecvtypeUsage(int x, int tyreUsage)
{
    cout<<"TyreModel RecvtypeUsage called"<<x<<" "<<tyreUsage<<endl;
}

void TyreModel::start()
{
     cout<<"TyreModel start called"<<endl;
     for(int i=0;i<4;i++)
     {
         m_tyre[i]->StartCollectingData(i+1);

     }
}

void TyreModel::initTyre()
{
    cout<<"TyreModel initTyre called"<<endl;


        m_tyre[0]=new Tyre(1,9,true,false,40);
        m_tyre[0]->RegisterWithMe(this);

        m_tyre[1]=new Tyre(2,34,false,true,90);
        m_tyre[1]->RegisterWithMe(this);

        m_tyre[2]=new Tyre(3,45,true,false,63);
        m_tyre[2]->RegisterWithMe(this);

        m_tyre[3]=new Tyre(4,69,false,true,80);
        m_tyre[3]->RegisterWithMe(this);



}
