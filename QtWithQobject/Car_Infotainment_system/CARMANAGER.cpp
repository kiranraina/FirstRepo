#include "CARMANAGER.h"


CARMANAGER::CARMANAGER()
{
    cout<<"CARMANAGER constructor called"<<endl;

}
CARMANAGER::~CARMANAGER()
{
    cout<<"CARMANAGER destructor called"<<endl;
    it=m_listcar.begin();
    while (it!=m_listcar.end()) {
        if(*it!=nullptr){
        delete(*it);
        }
        it++;
    }
}

void CARMANAGER::init()
{
    int base,mid,top,choose;
    cout<<"CARMANAGER init called"<<endl;
    while(1){
        cout<<"Enter which car vesion you want\n1.BaseVersion\n2.MidVersion\n3.TopVersion\n4.Display\n5.Exit\n"<<endl;
        cin>>choose;
    switch (choose) {
    case BASEVERSION:
        cout<<"You selected baseversion car"<<endl;
        cout<<"how much base version you want"<<endl;
        cin>>base;
        for(int i=0;i<base;i++){
            m_car=nullptr;
            m_car=new BaseVersion;
            m_car->setChassisNumber("BKCAR"+to_string(i+100));
            m_car->setVarient("Base");
            cout<<m_car->getchassisNumber()<<endl;
            m_listcar.push_back(m_car);
            m_car->init();
            cout<<"base version completed<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<i<<endl;
        }
        break;
    case MIDVERSION:
        cout<<"You selected midversion car"<<endl;
        cout<<"how much midversion you want"<<endl;
        cin>>mid;
        for(int i=0;i<mid;i++){
            m_car=nullptr;
            m_car=new MidVersion;
            m_car->setChassisNumber("MKCAR"+to_string(i+200));
            m_car->setVarient("Mid");
            cout<<"Car ID:"<<m_car->getchassisNumber()<<endl;
            m_listcar.push_back(m_car);
            m_car->init();
            cout<<"mid version completed<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        }
        break;
    case TOPVERSION:
        cout<<"You selected topversion car"<<endl;
        cout<<"how much topversion  you want"<<endl;
        cin>>top;
        for(int i=0;i<top;i++){
            m_car=nullptr;
            m_car=new TopVersion;
            m_car->setChassisNumber("TKCAR"+to_string(i+300));
            m_car->setVarient("Top");
            cout<<m_car->getchassisNumber()<<endl;
            m_listcar.push_back(m_car);
            m_car->init();
            cout<<"top version completed<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>"<<endl;
        }
        break;
         case DISPALY:
         cout<<"You selected diaplay car"<<endl;
         this->function();
        break;

    case EXIT:
        cout<<"your exit from the car version"<<endl;
        return;
    default:
        cout<<"Enter number is inavlid"<<endl;
        break;

    }
    }
}




void CARMANAGER::function()
{
   cout<<"CARMANAGER function called"<<endl;
   it=m_listcar.begin();
   while (it!=m_listcar.end()) {
       if(*it!=nullptr){
       cout<<(*it)->getchassisNumber()<<"inside print"<<endl;
       it++;
       }

   }
}

bool CARMANAGER::userCar(string carnum)
{
       cout<<"CARMANAGER userCar called"<<endl;
       fstream file1("./deletecar.csv",ios::out);
       if(!file1){
           cout<<"file1 not created"<<endl;
       }
       else{
           cout<<"file1  created success"<<endl;
           it=m_listcar.begin();
           while (it!=m_listcar.end()) {
          if((*it)->getchassisNumber()==carnum){
            file1 << (*it)->getVarient()<< "," << (*it)->getchassisNumber()<<"\n";
            m_listcar.remove(*it);
            return true;
          }
                it++;
               }

           }
       file1.close();
       return false;
}

void CARMANAGER::insertData()
{
     cout<<"CARMANAGER insertData called"<<endl;
     fstream file("./carfiles.csv",ios::out|ios::app);
     if(!file){
         cout<<"file not created"<<endl;
     }
     else{
         cout<<"file  created success"<<endl;
         it=m_listcar.begin();
         while (it!=m_listcar.end()) {

          file << (*it)->getVarient()<< "," << (*it)->getchassisNumber()<<"\n";

              it++;
             }

         }
     file.close();
 }

