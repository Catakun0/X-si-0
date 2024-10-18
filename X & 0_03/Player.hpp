#pragma once
#include <iostream>

class Player{ 
public:
    static int maxPlayers; //Jucatori maxim intro partida
    void playerName(); //introducere numelor 
    static std::string firstPlayer, secondPlayer; //variabelele pentru numele jucatorilor
    static bool inseredNames; //un bool care va fi true in cazul in care am introdus o data numele jucatorilor

    Player(); //constructor implicit
    Player(const Player& other); //constructor de copiere
    Player(const int initialMaxPlayers); // construcotr cu parametru

    Player& operator = (const Player& other); //operator de copiere
    bool operator==(const Player& other) const; //operator de comparatie
    friend std::ostream& operator << (std::ostream& os, const Player& player); // operator de afisare
    friend std::istream& operator >> (std::istream& is, Player& player); // operator de citire
};