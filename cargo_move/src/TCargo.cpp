#include "../header/TCargo.h"

#include <iostream>
TCargo::TCargo(float newWeight) {
    _x = 0;
    _y = 0;
    _z = 0;
    _weight = newWeight;
}

TCargo::~TCargo() {}

float TCargo::getWeight() { return _weight; }

void TCargo::setX(int newX) { _x = newX; }

void TCargo::setY(int newY) { _y = newY; }

void TCargo::setZ(int newZ) { _z = newZ; }

int TCargo::getX() { return _x; }

int TCargo::getY() { return _y; }

int TCargo::getZ() { return _z; }

void TCargo::showPoz() {
    std::cout << "Координата по оси x: " << _x << "\nКоордината по оси y: " << _y
              << "\nКоордината по оси z: " << _z << std::endl;
}