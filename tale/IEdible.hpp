#pragma once

#include "ICharacter.hpp"

class IEdible : public ICharacter {
   public:
    virtual void eat() = 0;
    virtual ~IEdible(){};
};