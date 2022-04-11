#include "TGrandMa.hpp"

#include <iostream>

TGrandMa::TGrandMa() {}

TGrandMa::~TGrandMa() {}

// change cur location
void TGrandMa::goTo(Location dest) { this->_location = dest; }

// goTo belly & print log
void TGrandMa::eat() {
    std::cout << "Grandma was eaten" << std::endl;
    this->goTo(STOMACH);
}

void TGrandMa::talk() { std::cout << "Pull the rope" << std::endl; }

void TGrandMa::openDoor() {
    std::cout << "EXCEPTION NOT IMPLEMENTED" << std::endl;
    exit(0);
}

void TGrandMa::live() {}

Location TGrandMa::getLocation() { return _location; }