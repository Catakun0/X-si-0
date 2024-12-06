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

    /// @brief Functia data este folosita pentru afisarea tablei in consola
    /// @param i parametrul de tip int este folosit pentru 2 meniuri, daca i == 1 afiseaza tabla, daca i == 2 afiseaza un meniu de final de meci
    void Draw(int i);

    /// @brief Functia data este folosita pentru a afisa datele care sunt salvate cu ajutorul Bliliotecii externe json, afisand fiecare player cate catsigur are
    /// @param filename inserarea denumirei fisierului nostru json in care se salveaza datele corespunzatoare 
    void LoadDataFromJson(const std::string& filename);

    /// @brief Functia data actualizeaza datele din fisierul json in momentul in care meciul este incheiat
    /// @param firstPlayer primeste ca parametru un bool care ii zice ce jucator sa fie actulizat, primul player daca este true, dar daca este false rezulta ca al doilea player trb actualizat
    void UpdateScore(bool firstPlayer);

    friend std::istream& operator>>(std::istream& in, Painter& painter); //operator de citire
    friend std::ostream& operator<<(std::ostream& out, const Painter& painter); //operator de afisare
    private:

    std::shared_ptr<Board> board;
}; 
