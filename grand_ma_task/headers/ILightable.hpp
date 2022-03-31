#pragma once

class ILightable {
   public:
    virtual bool turnOn() = 0;
    virtual ~ILightable(){};
};
