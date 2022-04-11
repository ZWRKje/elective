#include <iostream>

#include "TGrandMa.hpp"
#include "THunter.hpp"
#include "TRedHat.hpp"
#include "TWolf.hpp"
#include "TDoor.hpp"

int main() {

    TRedHat redHat;
    TGrandMa grandMa;
    TWolf bonk(&grandMa, &redHat);
    THunter hunter(&redHat, &grandMa, &bonk);
    
    redHat.live();
    bonk.live();

    return 0;
}
