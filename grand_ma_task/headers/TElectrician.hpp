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
    bool work(ILightable* lamp);
    bool workChair(ILightable* lamp, IChair* stool);
    TElectrician(){};
    TElectrician(const int height,
                 const std::map<ILightable*, IRepairable*>& base);
    ~TElectrician();
};
