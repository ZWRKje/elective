#include <iostream>

#include "TStaticCount.h"

int TStaticCount::_count = 0;

TStaticCount::TStaticCount() { _count++; }

TStaticCount::~TStaticCount() {}
void TStaticCount::pritnCount() { std::cout << _count << std::endl; }

int TStaticCount::getCount() { return _count; }