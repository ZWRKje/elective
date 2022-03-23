#ifndef TCRANE_H
#define TCRANE_H
#include "TCargo.h"

class TCrane {
   public:
    TCrane();
    ~TCrane();
    void moveUp(TCargo& t, int y);
};
#endif