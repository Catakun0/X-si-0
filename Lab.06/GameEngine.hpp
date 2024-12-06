#pragma once
#include <iostream>

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