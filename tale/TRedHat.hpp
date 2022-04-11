#pragma once
#include <iostream>
#include <string>

#include "IAddressGiveable.hpp"
#include "IEdible.hpp"
#include "ITalking.hpp"
#include "RandGener.hpp"

class TRedHat : public ITalking, public IEdible, public IAddressGiveable {
   public:
    TRedHat();
    virtual ~TRedHat();

    void goTo(Location str) override;
    Location getLocation() override;
    void live() override;

    void talk() override;

    void eat() override;

    Location giveAddress() override;

   private:
    Location _location;
    Location _address = PORCH;
    ITalking* _grandma;
    RandGener _gener;
};
