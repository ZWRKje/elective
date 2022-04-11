#pragma once

#include "IDoorKeeper.hpp"

class TDoor {
   private:
    IDoorKeeper* _keeper;

   public:
    void setKeeper(IDoorKeeper* newKeeper);
    bool checkAccess(IDoorKeeper* newKeeper);
    TDoor();
    ~TDoor();
};
