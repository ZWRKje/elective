#pragma once

#include <string>

#include "IEater.hpp"
#include "IEdible.hpp"
#include "IHunter.hpp"
#include "ITalking.hpp"

class THunter : public IHunter, public ITalking {
   public:
    THunter(IEdible* redHat, IEdible* grandMa, IEater* wolf);
    virtual ~THunter();

    void shoot() override;

    void goTo(Location newLoc) override;
    Location getLocation() override;
    void live() override;

    void talk() override;

   private:
    Location _location;
    IEdible* _redHat;
    IEdible* _grandMa;
    IEater* _wolf;
};
