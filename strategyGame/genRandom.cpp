#include "genRandom.hpp"
#include "mainAccount.hpp"
#include <windows.h>  

int genRandom::random(int min, int max) {
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    std::mt19937 gen(seed);
    std::uniform_int_distribution<> distrib(min, max);
    int randomNow = distrib(gen);

    if (mainAccount::levelAccount <= 10) 
    {
        Sleep(600);
    }
    else if (mainAccount::levelAccount <= 20)
    {
        Sleep(400);
    }
    else if (mainAccount::levelAccount <= 30)
    {
        Sleep(200);
    }
    else 
    {
        Sleep(100);
    }
    return randomNow;
}
