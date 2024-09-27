#pragma once
#include <iostream> 

class Board{ 
    public:
    static std::string squere; //sizeBoard [3][3]
    int setMove(int position, bool Xmove); //positioneaza "X" sau "0"
    bool check_If_is_empty(int position); //verifica daca este gol patratul pentru inserare
    bool checkWin();  //verifica daca exista un castigator
};
