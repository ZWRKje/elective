#include "TRedHat.hpp"

#include <iostream>

TRedHat::TRedHat() { _location = HOME; }

TRedHat::~TRedHat() {}

void TRedHat::goTo(Location l) {
    _location = l;
    std::cout << "Шапочка идйт в место под названием "
              << _location << std::endl;
}

Location TRedHat::giveAddress() { return _address; }

void TRedHat::eat() { this->goTo(STOMACH); }

void TRedHat::live() {
    std::cout << " \t Шапочка начинает свой путь \t " << std::endl;
    std::cout << "Шапочка решает куда идти: " << std::endl;

    if (RandGener::rand()) {
        std::cout << "Шапка решила пойти через лес " << std::endl;
        this->goTo(FOREST);
    } else {
        std::cout << "Шапка решила пойти по кривой дорожке " << std::endl;
        this->goTo(ROAD);
    }
}

void TRedHat::talk() {
    if (this->getLocation() == FOREST) {
        if (RandGener::rand()) {
            std::cout
                << "Красная шапочка решила рассказать волку адрес бабушки "
                << std::endl;
        }
    }
}

Location TRedHat::getLocation() { return _location; }
