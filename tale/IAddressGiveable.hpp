#pragma once

#include "ICharacter.hpp"

class IAddressGiveable : public ICharacter {
   public:
    virtual Location giveAddress() = 0;
    virtual ~IAddressGiveable(){};
};
