#pragma once
#include <iostream> 
#include <vector>
 
/// @brief Clasa data reprezinta toata tabla si datele acesteia, detine un array de la 0-9 de tip string, iar ocuparea unei coordonate va fi inlocuita cu X sau 0
class Board{ 
    public:
    
    std::vector<std::string> squere;
    /// @brief Constructorul implicit Board folosit pentru apelarea functiei pentru inserare a tablei
    Board();

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

    /// @brief Operatorul de afisare
    /// @param os variabila care stocheaza textul
    /// @param Board parametrul folosit ce e un Board pentur a prelua datele sale
    /// @return si returneaza textul din os
    friend std::ostream& operator << (std::ostream& os, const Board& Board); 

    /// @brief Operatorul de citire
    /// @param is variabila care stocheaza datele inserate de la tastatura
    /// @param Board parametru ce e de tip Board
    /// @return si returneza variabila "is"
    friend std::istream& operator >> (std::istream& is, Board& Board);

    /// @brief Functia data este folosita pentru inserarea tablei de la 1 la 9 cu ajutorul algoritmului STL generator, si cu functia lamda
    void initializareaTablei();

    /// @brief Functia data verifica prin apelarea operatorului de comparare daca positia inserata de la tastatura este libera sau nu
    /// @param position parametru pe care il primeste este o pozitie de la 1-9, reprezantand pozitiile tablei in care jucatorul poate sa insereze X sau 0
    /// @return returneaza true daca este liber si false daca este cupata pozitia data
    bool check_If_is_empty(int position); 

    /// @brief Functia data este folosita pentru a verifica toate liniile veritcale, orizontale si diagonalele pentru a afla daca exista un castigator
    /// @return in cazul in care exista un 3 de X sau de 0 la rand, va returna true, existand un castigator. Daca nu exista retunreaza false
    int checkWin();  
};
