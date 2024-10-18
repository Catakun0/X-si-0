#include "RandomPlay.hpp"
#include <iostream>
#include <ctime>
#include <windows.h>  //pentru a pune putin in pauza programul

int RandomPlay::playerStart = 0;

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
RandomPlay& RandomPlay::operator = (const RandomPlay& other)
{
    if (this != &other) 
    {

    }
    return *this;
}

//Operator de comparatie
bool RandomPlay::operator == (const RandomPlay& other) const 
{
    return true; 
}

//Operator de afisare
std::ostream& operator<<(std::ostream& os, const RandomPlay& randomPlay)
{
    os << "Player -> " << randomPlay.playerStart << " Incepe" << std::endl;
    return os;
}

//Operator de citire
std::istream& operator>>(std::istream& is, RandomPlay& randomPlay) 
{
    return is;
}

void RandomPlay::randomGenerate() { //o randomizare bazata pe timp (nu-mi lucra cu <random>)

    srand(time(0));
    playerStart = rand() % 2 + 1;
    std::cout << *this;
    Sleep(2000);
    return;
}
