#pragma once

#include "../headers/TGrandMa.hpp"

#include <iostream>

TChair* TGrandMa::giveChair() { return _stool; }

void TGrandMa::sunSet() {
    if (!_lamp->turnOn()) {
        std::cout << "Лампа сломалась \n";
        std::cout << "Электрик приступает к работе \n";
        if (!_worker.work(_lamp)) {
            std::cout << "Тут без стула не обойтись \n";

            if (!_worker.workChair(_lamp, this->giveChair())) {
                std::cout << "Лампа не подлежит ремонту \n";
                return;
            }
        };
        std::cout << "Лампа починенна \n";
        _lamp->turnOn();
    }
};

TGrandMa::TGrandMa(ILightable* lamp, TChair* stool, TElectrician& worker) {
    _lamp = lamp;
    _stool = stool;
    _worker = worker;
}
TGrandMa::~TGrandMa() {
    delete _lamp;
    delete _stool;
}