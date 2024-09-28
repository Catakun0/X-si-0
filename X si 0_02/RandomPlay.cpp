#include "RandomPlay.hpp"
#include <iostream>
#include <ctime>

int RandomPlay::playerStart = 0;

void RandomPlay::randomGenerate() { //o randomizare bazata pe timp (nu-mi lucra cu <random>)

    srand(time(0));
    playerStart = rand() % 2 + 1;

}
