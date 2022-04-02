#include "../headers/TSocket.h"
#include <iostream>

void TSocket::connect(IChargeable *t) {
    t->charge();
}