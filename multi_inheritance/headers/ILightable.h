#ifndef ILIGHTABLE_H
#define ILIGHTABLE_H

class ILightable {
    public:
    virtual void light() = 0;
    virtual ~ILightable(){};
};


#endif