#include "TWolf.hpp"

#include <iostream>

void TWolf::goTo(Location place) {
    _location = place;
    std::cout << "Вол идет в место под названием" << _location << std::endl;
}

Location TWolf::getLocation() { return _location; }

void TWolf::live() {
    std::cout << "Волк ест оленя" << _location << std::endl;
    if (RandGener::rand()) {
        std::cout << "Волк решил поискать жертву " << std::endl;

        if (_redhat->getLocation() == FOREST) {
            if (RandGener::rand()) {
                std::cout << "Волк изявляет желание поговорить с шапочкой"
                          << std::endl;
                if (RandGener::rand()) {
                    _redhat->talk();
                    this->goTo(_redhat->giveAddress());

                } else {
                    std::cout
                        << "Волк поговорил с шапочкой и решил её отпустить"
                        << std::endl;
                    
                }
            } else {
                std::cout << "Волк съедает шапочку" << std::endl;
                _redhat->eat();
                std::cout << "Волк греется в лучах солнца на полянке в лесу"
                          << std::endl;
            }
        } else {
            std::cout << "ШАПКА НЕ В ЛЕСУ" << std::endl;
        }
    } else {
        std::cout << "Волк доедает оленя " << std::endl;
    }
}

void TWolf::empty() {
    for (const auto& elem : _stomach) {
        elem->goTo(this->getLocation());
    }
}

void TWolf::talk() { std::cout << "Волк разговаривает" << std::endl; }

TWolf::TWolf(IEdible* babushka, TRedHat* redhat) {
    _babushka = babushka;
    _redhat = redhat;
}

TWolf::~TWolf() {}
