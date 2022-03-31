#pragma once

#include "TElectrician.hpp"
int TElectrician::getHeight() { return _height; }

bool TElectrician::work(ILightable* lamp) {
    auto l = _base[lamp];
    if (!l) {
        return false;
    }
    if (this->getHeight() >= l->getHeight()) {
        l->repair();
        return true;
    } else {
        return false;
    }
}

bool TElectrician::workChair(ILightable* lamp, IChair* stool) {
    auto l = _base[lamp];
    if (!l) return false;

    if (this->getHeight() + stool->getAltitude() >= l->getHeight()) {
        l->repair();
        return true;
    } else {
        return false;
    }
}

TElectrician::TElectrician(const int height,
                           const std::map<ILightable*, IRepairable*>& base) {
    _base = base;
    _height = height;
}

TElectrician::~TElectrician() {}