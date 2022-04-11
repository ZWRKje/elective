#include "TDoor.hpp"

#include <iostream>

void TDoor::setKeeper(IDoorKeeper* newKeeper) { _keeper = newKeeper; }

bool TDoor::checkAccess(IDoorKeeper* newKeeper) {
    if (_keeper == newKeeper) {
        std::cout << "Дверь открылась" << std::endl;
        return true;
    } else {
        return false;
    }
}

TDoor::TDoor() {}

TDoor::~TDoor() {}
