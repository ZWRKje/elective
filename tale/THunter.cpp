#include "THunter.hpp"

#include <iostream>

THunter::THunter(IEdible* redHat, IEdible* grandMa, IEater* wolf) {
    _redHat = redHat;
    _grandMa = grandMa;
    _wolf = wolf;
}

THunter::~THunter() {}
void THunter::live() {}

void THunter::shoot() {
    std::cout << "Ба-Бах! Охотники выстрелили" << std::endl;
    _wolf->empty();
}

void THunter::goTo(Location newLoc) { _location = newLoc; }

void THunter::talk() { std::cout << "Охоники разговаривают" << std::endl; }

Location THunter::getLocation() {
    std::cout << "Охотник: *говорит адрес*" << std::endl;
    return (Location)1;
}
