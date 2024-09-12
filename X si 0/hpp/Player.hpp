#pragma once

class Player{ 
public:
    static int maxPlayers; //Jucatori maxim intro partida
    char name[20]; //Numele jucatorilor cu maxim 20 de caractere
    bool isX; //Jucatorul este "X" sau "0"
};