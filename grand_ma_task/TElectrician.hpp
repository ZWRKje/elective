#pragma once
#include <map>

#include "IChair.hpp"
#include "ILightable.hpp"
#include "IRepairable.hpp"

class TElectrician {
   private:
    int _height;
    std::map<ILightable*, IRepairable*> _base;

   public:
    int getHeight();
    bool work(IRepairable* lamp);
    bool workChair(IRepairable* lamp, IChair* stool);
    TElectrician(){};
    TElectrician(int height);
    ~TElectrician();
};
