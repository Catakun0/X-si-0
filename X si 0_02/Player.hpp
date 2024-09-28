#pragma once
#include <iostream>

class Player{ 
public:
    static int maxPlayers; //Jucatori maxim intro partida
    void playerName(); //introducere numelor 
    static std::string firstPlayer, secondPlayer; //variabelele pentru numele jucatorilor
    static bool inseredNames; //un bool care va fi true in cazul in care am introdus o data numele jucatorilor
};