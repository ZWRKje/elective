#pragma once

class IRepairable {
   public:
    virtual void repair() = 0;
    virtual int getHeight() = 0;
    virtual ~IRepairable(){};
};
