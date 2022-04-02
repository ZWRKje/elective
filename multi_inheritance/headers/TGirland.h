#ifndef TGIRLAND_H
#define TGIRLAND_H
#include "ILightable.h"
#include <iostream>
#include <vector>

class TGirland: public ILightable {
    protected:
    std::vector<ILightable *> objects;
    public:
    void addLight(ILightable *t);
    void light();
    TGirland():ILightable(){};
    virtual ~TGirland(){};
};



#endif