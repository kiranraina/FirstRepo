#include "ECGSystem.h"

ECGSystem::ECGSystem()
{
    init();
}
bool ECGSystem::init(){
    m_ecgLead= new ECGLead*[12];
    for(int i=0;i<12;i++){
        m_ecgLead[i]=new ECGLead;
    }
}
bool ECGSystem::print(){

}
