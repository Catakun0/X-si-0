#pragma once
#include <iostream> 

class Board{ 
    public:

    std::string squere[9]; //sizeBoard [3][3]

    Board(); //Constructor mplicit
    Board (const Board& other); //constructor de copiere

    bool check_If_is_empty(int position); //verifica daca este gol patratul pentru inserare
    int checkWin();  //verifica daca exista un castigator
};
