#include <iostream>

#include "TStaticCount.h"

int main() {
    std::cout << TStaticCount::getCount() << std::endl;

    TStaticCount firts;

    firts.pritnCount();

    TStaticCount second;

    second.pritnCount();

    return 0;
}
