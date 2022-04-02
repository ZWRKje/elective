#ifndef TSOCKET_H
#define TSOCKET_H
#include "IChargable.h"

class TSocket {
    
    public:
    void connect(IChargeable *t);
    TSocket(){};
    virtual ~TSocket(){};
};


#endif