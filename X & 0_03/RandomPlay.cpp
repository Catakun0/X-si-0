#include "RandomPlay.hpp"
#include <iostream>
#include <ctime>

// Constructor implicit
RandomPlay::RandomPlay()
{

}

//Constructor de copiere
RandomPlay::RandomPlay(const RandomPlay& other)
{

}
//Constructor cu parametru
RandomPlay::RandomPlay(const int initialWhoStart) 
{

}

//Operator de copiere
RandomPlay& RandomPlay::operator=(const RandomPlay& other)
{
    
}

//Operator de comparatie
bool RandomPlay::operator==(const RandomPlay& other) const {
    
}

// Operator de afisare
std::ostream& operator<<(std::ostream& os, const RandomPlay& randomPlay) {
    
}

// Operator de citire
std::istream& operator>>(std::istream& is, RandomPlay& randomPlay) {
    
}

int RandomPlay::playerStart = 0;

void RandomPlay::randomGenerate() { //o randomizare bazata pe timp (nu-mi lucra cu <random>)

    srand(time(0));
    playerStart = rand() % 2 + 1;
}
