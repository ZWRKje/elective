#include <iostream>

#include "TElectrician.hpp"
#include "TFlash.hpp"
#include "TGrandMa.hpp"
int main() {
    TFlash* lamp = new TFlash(200);
    TChair* stool = new TChair(25);
    TElectrician man(180);
    TGrandMa baba(lamp, stool, man);

    int life = 10;
    for (int i = 0; i < life; ++i) {
        std::cout << i << "-год жизни " << std::endl;
        baba.sunSet();
    }

    return 0;
}