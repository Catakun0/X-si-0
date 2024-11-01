#pragma once
#include <iostream> 
#include <vector>

class Board{ 
    public:

    std::vector<std::string> squere;

    Board(); //Constructor mplicit
    Board (const Board& other); //constructor de copiere
    Board(const int initialHightBoard); // construcotr cu parametru

    Board& operator = (const Board& other);//operator de copiere
    bool operator == (int position) const; // operator de comparatie
    friend std::ostream& operator << (std::ostream& os, const Board& Board); // operator de afisare
    friend std::istream& operator >> (std::istream& is, Board& Board); // operator de citire

    void initializareaTablei();
    bool check_If_is_empty(int position); //verifica daca este gol patratul pentru inserare
    int checkWin();  //verifica daca exista un castigator
};
Board::Board() : squere(8) { // Inițializăm vectorul cu 9 elemente
    initializareaTablei(); // Apelăm metoda pentru a inițializa tabla
}

