#include "../header/TTruck.h"

#include <iostream>

TTruck::TTruck() {}

TTruck::~TTruck() {}

void TTruck::move(TCargo& t, int x, int y) {
    t.setX(x);
    t.setY(y);
}