#pragma once
#include <iostream>

/// @brief Clasa data este folosita pentru a returna un numar la intamplare intre 1 si 2, pentru a incepe un jucator la intamplare, Randomizarea fiind bazata pe timp
class RandomPlay{
    public: 

    RandomPlay(); //implicit 
    RandomPlay(const RandomPlay& other); //const de copieres
    RandomPlay(const int initialWhoStart); // construcotr cu parametru

    RandomPlay& operator = (const RandomPlay& other); //operator de copiere
    bool operator == (const RandomPlay& other) const; // operator de comparatie
    friend std::ostream& operator << (std::ostream& os, const RandomPlay& randomPlay); // operator de afisare
    friend std::istream& operator >> (std::istream& is, RandomPlay& randomPlay); // operator de citire

    static int playerStart; //Va face prima decizia un jucator la intamplarea, "player1" sau "player2" va incepe in dependenta daca variabila pica 1 sau 2

    /// @brief functia data este folosita pentru un start randomizat, incepand la intamplare primul player sau al doilea player
    void randomGenerate();
};


