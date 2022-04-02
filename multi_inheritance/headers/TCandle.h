#ifndef TCANDLE_H
#define TCANDLE_H
#include "ILightable.h"

class TCandle: public ILightable {
    public:
    void light();
    TCandle():ILightable(){};
    virtual ~TCandle(){};
};


#endif