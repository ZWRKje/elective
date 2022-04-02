#ifndef TFLASH_H
#define TFLASH_H
#include "ILightable.h"
#include "IChargable.h"

class TFlash: public IChargeable, public ILightable {
    public:
    void light();
    void charge();
    TFlash(){};
    virtual ~TFlash(){};
};


#endif