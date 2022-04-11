#pragma once

#include "ICharacter.hpp"

class ITalking : public ICharacter {
   public:
    virtual void talk() = 0;
    virtual ~ITalking(){};
};