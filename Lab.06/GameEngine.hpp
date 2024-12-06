#pragma once
#include <iostream>

/// @brief Clasa data este folosita pentru a da un start jocului creend mai exact instantele claselor necesare pentru a putea jocul sa ruleze si sa afiseze corespunzator toata informatia incarcata
class GameEngine{
    public:

    /// @brief Constructor implicit ce este apelat automat la crearea instantei
    GameEngine(); 

    /// @brief Constructor de copiere, pentru a putea face o copie
    /// @param other reprezinta obiectul cu care dorim sa ii facem copia
    GameEngine(const GameEngine& other);

    /// @brief Constructorul cu parametri are posibilitatea sa primeasca o variabila de tipul parametrului identificat in constructor
    /// @param startGame reprezinta variabila pe care o primeste
    GameEngine(const bool startGame); 

    /// @brief Operatorul de copiere este folosit pentru copierea unei clase oferind o dinamica mai buna
    /// @param other reprezinta obectul pe care il va copia
    /// @return returneaza rezultatul dupa copiere
    GameEngine& operator = (const GameEngine& other);

    /// @brief Operatorul de comparatie este folosit pentru a compara o logica daca este adevarata sau nu
    /// @param other Primeste o clasa cu care face comparatia
    /// @return returneaza true sau false in depedenta logicei din bloc
    bool operator == (const GameEngine& other) const;

    /// @brief Operatorul de afisare este folosit pentru a putea afisa un numar de date dorit prin simpla apelare
    /// @param os Variabila care stochiaza toate datele pentru afisare
    /// @param gameEngine Clasa de care are nevoie de a prelua informatiile de care are nevoie
    /// @return returneaza "os" afisinduse datele stocate
    friend std::ostream& operator << (std::ostream& os, const GameEngine& gameEngine);

    /// @brief Operatorul de citire este folosit in momentul in care dorim sa citim de la tastatura o anumita informatie
    /// @param is variabila care stochiaza informatia introdusa de la tastatura
    /// @param gameEngine clasa de care are nevoie pentru logica din bloc 
    /// @return returneaza "is" informatia care a fost introdusa la tastatura
    friend std::istream& operator >> (std::istream& is, GameEngine& gameEngine);

    /// @brief Functia data este folosita pentru a da un start jocului, instantiind doate instantele necesare, si inclusiv apelarea lor in ordinea coresponzatoare pentru a incepe jocul
    void StartGame(); 
}; 