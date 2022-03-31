#pragma once
#include "ILightable.hpp"
#include "IRepairable.hpp"

class TFlash : public ILightable, public IRepairable {
   private:
    int _height;
    int _healthPoint = 10;

   public:
    virtual int getHeight() override;
    virtual bool turnOn() override;
    virtual void repair() override;
    TFlash(int height);
    virtual ~TFlash() override;
};