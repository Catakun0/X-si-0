#pragma once
#include <iostream>
#include "Board.hpp"
#include "Painter_abstract.hpp"

class Painter : public Painter_abstract
{ 
    public: 
    int select1;

    Painter(); //constructor implicit
    Painter(const Painter& other); //consttructor de copiere
    Painter(Board* b) : board(b) {} //primeste ca parametru un board cu care se va juca

    Painter& operator = (const Painter& other);//operator de copiere
    bool operator == (const Painter& other) const;

    void Draw(int i); //Afisarea datelor necesare inclusiv a tablei

    friend std::istream& operator>>(std::istream& in, Painter& painter); //operator de citire
    friend std::ostream& operator<<(std::ostream& out, const Painter& painter); //operator de afisare
    private:
    Board* board;
}; 
