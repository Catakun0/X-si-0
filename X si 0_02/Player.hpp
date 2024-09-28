#pragma once
#include <iostream>

class Player{ 
public:
    static int maxPlayers; //Jucatori maxim intro partida
    void playerName(); //introducere numelor hpp
    static std::string firstPlayer, secondPlayer;
    static bool inseredNames;
};