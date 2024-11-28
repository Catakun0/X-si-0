#pragma once
#include <iostream>
#include "Board.hpp"
#include "Painter_abstract.hpp"
#include <memory>

class Painter : public Painter_abstract
{ 
    public: 
    int select1;

    Painter(); //constructor implicit
    Painter(const Painter& other); //consttructor de copiere
    Painter(std::shared_ptr<Board> b) : board(b){} // primeste ca parametru un pointer de tip shared_ptr la board

    Painter& operator = (const Painter& other);//operator de copiere
    bool operator == (const Painter& other) const;

    void Draw(int i); //Afisarea datelor necesare inclusiv a tablei
    void LoadDataFromJson(const std::string& filename);
    void UpdateScore(bool firstPlayer);

    friend std::istream& operator>>(std::istream& in, Painter& painter); //operator de citire
    friend std::ostream& operator<<(std::ostream& out, const Painter& painter); //operator de afisare
    private:
    std::shared_ptr<Board> board;
}; 
