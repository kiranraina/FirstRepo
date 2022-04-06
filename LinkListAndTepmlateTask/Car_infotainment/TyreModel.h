#ifndef TYREMODEL_H
#define TYREMODEL_H
#include"Commanutiles.h"
#include"INeedTyreData.h"
#include"Tyre.h"

class TyreModel : public INeedTyreData
{
    TyreModel();
public:
    ~TyreModel();
    static TyreModel* getTyremodel();
    void RecvAirPressure(int x,int airpressure);
    void Recvwheel(int x,bool wheel);
    void Recvairleakage(int x,bool airleakage);
    void RecvtypeUsage(int x,int tyreUsage);
    void start();
    void initTyre();
private:
    Tyre *m_tyre[4] ;
    static TyreModel *m_tyremodel1;
};

#endif // TYREMODEL_H
