#pragma once

#include <iostream>
#include <vector>

#include "IEdible.hpp"
#include "IEater.hpp"
#include "IHunter.hpp"
#include "ITalking.hpp"
#include "RandGener.hpp"
#include "TRedHat.hpp"
#include "IDoorKeeper.hpp"


class TWolf : public IEater, public ITalking, public IDoorKeeper {
   public:
    TWolf(IEdible* babushka, TRedHat* redhat); 
    virtual ~TWolf();

    void empty() override;

    void goTo(Location place) override;
    Location getLocation() override;
    void live() override;

    void talk() override;

   private:
    IEdible* _babushka;
    TRedHat* _redhat;
    IHunter* _hunter;
    Location _location = FOREST;
    std::vector<IEdible*> _stomach;

};
