#include <iostream>
#include <map>

#include "TElectrician.hpp"
#include "TFlash.hpp"
#include "TGrandMa.hpp"
int main() {
    TFlash* lamp1 = new TFlash(200);
    TFlash* lamp2 = new TFlash(210);
    TFlash* lamp3 = new TFlash(210);

    TChair* stool = new TChair(25);
    std::map<ILightable*, IRepairable*> base;
    base[lamp1] = lamp1;
    base[lamp3] = lamp3;

    TElectrician man(180, base);
    TGrandMa baba(lamp2, stool, man);

    int life = 10;
    for (int i = 0; i < life; ++i) {
        std::cout << i << "-год жизни " << std::endl;
        baba.sunSet();
    }

    return 0;
}