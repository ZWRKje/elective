#pragma once
#include "ILightable.hpp"
#include "TChair.hpp"
#include "TElectrician.hpp"

class TGrandMa {
   private:
    ILightable* _lamp;
    TChair* _stool;
    TElectrician _worker;

   public:
    TChair* giveChair();
    void sunSet();
    TGrandMa(ILightable* lamp, TChair* stool, TElectrician& worker);
    ~TGrandMa();
};