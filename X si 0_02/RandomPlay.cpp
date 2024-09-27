#include "RandomPlay.hpp"
#include <iostream>
#include <random>
#include <chrono>

int RandomPlay::playerStart = 0;

void RandomPlay::randomGenerate() {
    //ramdomizare bazata pe timp
    std::random_device rd;
    std::mt19937 gen(std::chrono::system_clock::now().time_since_epoch().count());

    std::uniform_int_distribution<> distr(1, 2);
    RandomPlay::playerStart = distr(gen);
    //std::cout << RandomPlay::playerStart << std::endl;
}
