#pragma once
#include <iostream> 
#include <vector>
 
class Board{ 
    public:
    
    std::vector<std::string> squere;
    /// @brief Constructorul implicit Board folosit pentru inserarea table de la 1-9
    Board(); //Constructor mplicit 

    /// @brief Folosirea Constructorului de copiere pentru a copia un alt board
    /// @param other reprezentand o tabla diferita
    Board (const Board& other);

    /// @brief Constructorul cu parametru
    /// @param initialHightBoard variabila fiind folosita pentru difinirea marimei tablei 
    Board(const int initialHightBoard);

    /// @brief Operatorul de copiere
    /// @param other reprezetand o alta tabla
    Board& operator = (const Board& other);

    /// @brief Operatorul de comparare folosit pentru a detecta daca pe pozitia data
    /// @param position care o primeste ca prametru, exista un "0" sau "X"
    /// @return si returneaza true daca nu exista si false daca exista
    bool operator == (int position) const; 

    /// @brief 
    /// @param os 
    /// @param Board 
    /// @return 
    friend std::ostream& operator << (std::ostream& os, const Board& Board); 
    friend std::istream& operator >> (std::istream& is, Board& Board);

    void initializareaTablei();
    bool check_If_is_empty(int position); //verifica daca este gol patratul pentru inserare
    int checkWin();  //verifica daca exista un castigator
};
