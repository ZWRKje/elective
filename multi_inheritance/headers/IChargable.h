#ifndef ICHARGABLE_H
#define ICHARGABLE_H

class IChargeable {
    public:
    virtual void charge() = 0;
    virtual ~IChargeable(){};
};


#endif