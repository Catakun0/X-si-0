#pragma once
#include <iostream> 

class Board{ 
    public:
    static std::string squere[8]; //sizeBoard [3][3]
    static void inserareaSquer(); //inseram tabla de la 1-9
    static bool check_If_is_empty(int position); //verifica daca este gol patratul pentru inserare
    static int checkWin();  //verifica daca exista un castigator
};
