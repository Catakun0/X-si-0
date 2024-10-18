#pragma once
#include <iostream>

class GameEngine{
    public:
    GameEngine(); //implicit
    GameEngine(const GameEngine& other); // de copiere
    GameEngine(const bool startGame); // cu parametru

    GameEngine& operator = (const GameEngine& other);//operator de copiere
    bool operator == (const GameEngine& other) const;
    friend std::ostream& operator << (std::ostream& os, const GameEngine& gameEngine);
    friend std::istream& operator >> (std::istream& is, GameEngine& gameEngine);

    void StartGame(); //Porneste jocul
}; 