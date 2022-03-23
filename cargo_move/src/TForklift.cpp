#include "../header/TForklift.h"

#include <iostream>
TForklift::TForklift() { _liftPower = 100; }

TForklift::~TForklift() {}

void TForklift::move(TCargo& c, int x, int y, int z) {
    if (c.getWeight() > _liftPower) {
        std::cout << "Груз слишком тяжёлый" << std::endl;
        return;
    }
    if (c.getX() == x && c.getY() == y && c.getZ() == z) {
        std::cout << "Груз не требует перемещения" << std::endl;
        return;
    }
    _truck.move(c, x, y);
    if (z != c.getZ()) {
        _crane.moveUp(c, z);
    }
}
