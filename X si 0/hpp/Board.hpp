#pragma once

class Board{ //program one
    char squere[9]; //sizeBoard [3][3]
    public:
    int setMove(int position, bool Xmove); //positioneaza "X" sau "0"
    void check_If_is_empty(int position); //verifica daca este gol patratul pentru inserare
    bool checkWin();  //verifica daca exista un castigator
};
