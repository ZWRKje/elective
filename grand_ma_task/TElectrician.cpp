#pragma once

#include "TElectrician.hpp"
int TElectrician::getHeight() { return _height; }

bool TElectrician::work(IRepairable* lamp) {
    if (this->getHeight() >= lamp->getHeight()) {
        lamp->repair();
        return true;
    } else {
        return false;
    }
}

bool TElectrician::workChair(IRepairable* lamp, IChair* stool) {
    if (this->getHeight() + stool->getAltitude() >= lamp->getHeight()) {
        lamp->repair();
        return true;
    } else {
        return false;
    }
}

TElectrician::TElectrician(int height) { _height = height; }

TElectrician::~TElectrician() {}