#include "RandomPlay.hpp"
#include <iostream>
#include <ctime>

RandomPlay::RandomPlay()
{

}

RandomPlay::RandomPlay(const RandomPlay& other)
{

}
RandomPlay::RandomPlay(const int initialWhoStart) {

}
RandomPlay& RandomPlay::operator = (const RandomPlay& other) {

}
bool RandomPlay::operator == (const RandomPlay& other) const {

}
std::ostream& operator << (std::ostream os, const RandomPlay& randomPlay) {

}
std::istream& operator >> (std::istream is, RandomPlay& brandomPlay) {

}

int RandomPlay::playerStart = 0;

void RandomPlay::randomGenerate() { //o randomizare bazata pe timp (nu-mi lucra cu <random>)

    srand(time(0));
    playerStart = rand() % 2 + 1;

}
