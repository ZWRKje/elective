#ifndef TTRUCK_H
#define TTRUCK_H
#include "TCargo.h"

class TTruck{
    public:
    TTruck();
    ~TTruck();
    void move(TCargo& t, int x, int y);
};

#endif