#pragma once
#include "IChair.hpp"

class TChair : public IChair {
   private:
    int _altitude;

   public:
    int getAltitude();
    TChair(int altitude);
    virtual ~TChair();
};