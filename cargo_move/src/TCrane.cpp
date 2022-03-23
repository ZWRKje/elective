#include "../header/TCrane.h"

TCrane::TCrane() {}

TCrane::~TCrane() {}

void TCrane::moveUp(TCargo& t, int z) { t.setZ(z); }