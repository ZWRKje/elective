#ifndef TFORKLIFT_H
#define TFORKLIFT_H
#include "TCargo.h"
#include "TCrane.h"
#include "TTruck.h"

class TForklift {
   private:
    float _liftPower;
    TCrane _crane;
    TTruck _truck;

   public:
    TForklift();
    ~TForklift();
    void move(TCargo& c, int x, int y, int z);
};
#endif