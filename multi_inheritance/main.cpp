#include <iostream>
#include "./headers/TCandle.h"
#include "./headers/TFlash.h"
#include "./headers/TGirland.h"
#include "./headers/TTeapot.h"
#include "./headers/TSocket.h"
int main() {

    TCandle candle;
    TFlash flash;
    TGirland girland;
    TSocket socket;
    TTeapot teapot;
    TGirland innerGirland;

    socket.connect(&flash);
    socket.connect(&teapot);
    
    innerGirland.addLight(&flash);
    innerGirland.addLight(&candle);
    std::cout << "Started lighting a Girland" << std::endl;
    girland.addLight(&innerGirland);
    girland.light();
    return 0;
}