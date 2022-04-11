#pragma once

#include <string>

#include "IDoorKeeper.hpp"
#include "IEdible.hpp"
#include "ITalking.hpp"

class TGrandMa : public IEdible, public ITalking, public IDoorKeeper{
   public:
    TGrandMa();
    virtual ~TGrandMa();

    void eat() override;

    void goTo(Location dest) override;
    Location getLocation() override;
    void live() override;

    void talk() override;

    void openDoor();

   private:
    Location _location;
    ITalking* _shapka;
};
