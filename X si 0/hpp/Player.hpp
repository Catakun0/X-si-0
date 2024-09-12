#pragma once

class Player{ 
public:
    int maxPlayers = 2; //Jucatori maxim intro partida
    char name[20]; //Numele jucatorilor cu maxim 20 de caractere
    bool isX; //Jucatorul este "X" sau "0"
};