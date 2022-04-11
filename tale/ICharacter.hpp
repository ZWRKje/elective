#pragma once

#include "Location.hpp"

class ICharacter {
   public:
    virtual void goTo(Location) = 0;
    virtual Location getLocation() = 0;
    virtual void live() = 0;
    virtual ~ICharacter(){};
};