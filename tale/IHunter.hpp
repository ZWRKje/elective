#pragma once

#include "ICharacter.hpp"

class IHunter : public ICharacter {
   public:
    virtual void shoot() = 0;
    virtual ~IHunter(){};
};