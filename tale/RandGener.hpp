#pragma once

#include <random>

class RandGener {
   public:
    static bool rand();

   private:
    static std::uniform_int_distribution<int> distrib;
    static std::random_device rd;
    static std::mt19937 gen;
};
