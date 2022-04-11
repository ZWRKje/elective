#pragma once

#include "ICharacter.hpp"

class IEater : public ICharacter {
   public:
    virtual void empty() = 0;
    virtual ~IEater(){};
};