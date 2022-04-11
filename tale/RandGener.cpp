#include "RandGener.hpp"

std::random_device RandGener::rd;

std::mt19937 RandGener::gen(RandGener::rd());

std::uniform_int_distribution<int> RandGener::distrib(1, 2);

bool RandGener::rand() {
    int a = distrib(gen);
    return a % 2;
}
