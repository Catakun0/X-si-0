#pragma once
#include <iostream>

/// @brief Clasa data este folosita pentru a da un start jocului creend mai exact instantele claselor necesare pentru a putea jocul sa ruleze si sa afiseze corespunzator toata informatia incarcata
class GameEngine{
    public:
    GameEngine(); 
    GameEngine(const GameEngine& other);
    GameEngine(const bool startGame); 

    GameEngine& operator = (const GameEngine& other);
    bool operator == (const GameEngine& other) const;
    friend std::ostream& operator << (std::ostream& os, const GameEngine& gameEngine);
    friend std::istream& operator >> (std::istream& is, GameEngine& gameEngine);

    /// @brief Functia data este folosita pentru a da un start jocului, instantiind doate instantele necesare, si inclusiv apelarea lor in ordinea coresponzatoare pentru a incepe jocul
    void StartGame(); 
}; 