#ifndef TTEAPOT_H
#define TTEAPOT_H
#include "IChargable.h"

class TTeapot: public IChargeable {
    
    public:
    void charge();
    TTeapot():IChargeable(){}
    virtual ~TTeapot(){};
};


#endif