#pragma once
#include <iostream>
#include "Board.hpp"

class Painter{ 
    public: 

    int select1;
    Board* board;

    Painter(Board* b) : board(b) {}

    void Draw(int i); //Afisarea datelor necesare inclusiv a tablei

    friend std::istream& operator>>(std::istream& in, Painter& painter);
    friend std::ostream& operator<<(std::ostream& out, const Painter& painter);

}; 
