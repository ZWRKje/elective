#pragma once
#include "TFlash.hpp"

#include <iostream>

int TFlash::getHeight() { return _height; }

bool TFlash::turnOn() {
    // std::cout << "ХП лампы:" << _healthPoint << std::endl;
    if (_healthPoint > 0) {
        _healthPoint -= 5;
        return true;
    } else {
        return false;
    }
};

void TFlash::repair() { _healthPoint = 10; };

TFlash::TFlash(int height) { _height = height; }

TFlash::~TFlash() {}