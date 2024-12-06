#pragma once
#include <iostream>

/// @brief Clasa data este folosita pentru a returna un numar la intamplare intre 1 si 2, pentru a incepe un jucator la intamplare, Randomizarea fiind bazata pe timp
class RandomPlay{
    public: 

    /// @brief Constructor implicit ce este apelat automat la crearea instantei
    RandomPlay(); 

    /// @brief Constructor de copiere, pentru a putea face o copie
    /// @param other reprezinta obiectul cu care dorim sa ii facem copia
    RandomPlay(const RandomPlay& other);

    /// @brief Constructorul cu parametri are posibilitatea sa primeasca o variabila de tipul parametrului identificat in constructor
    /// @param initialWhoStart reprezinta variabila pe care o primeste
    RandomPlay(const int initialWhoStart); 


    /// @brief Operatorul de copiere este folosit pentru copierea unei clase oferind o dinamica mai buna
    /// @param other reprezinta obectul pe care il va copia
    /// @return returneaza rezultatul dupa copiere
    RandomPlay& operator = (const RandomPlay& other); 

    /// @brief Operatorul de comparatie este folosit pentru a compara o logica daca este adevarata sau nu
    /// @param other Primeste o clasa cu care face comparatia
    /// @return returneaza true sau false in depedenta logicei din bloc
    bool operator == (const RandomPlay& other) const; 

    /// @brief Operatorul de afisare este folosit pentru a putea afisa un numar de date dorit prin simpla apelare
    /// @param os Variabila care stochiaza toate datele pentru afisare
    /// @param randomPlay Clasa de care are nevoie de a prelua informatiile de care are nevoie
    /// @return returneaza "os" afisinduse datele stocate
    friend std::ostream& operator << (std::ostream& os, const RandomPlay& randomPlay); 

    /// @brief Operatorul de citire este folosit in momentul in care dorim sa citim de la tastatura o anumita informatie
    /// @param is variabila care stochiaza informatia introdusa de la tastatura
    /// @param randomPlay clasa de care are nevoie pentru logica din bloc 
    /// @return returneaza "is" informatia care a fost introdusa la tastatura
    friend std::istream& operator >> (std::istream& is, RandomPlay& randomPlay);

    static int playerStart; //Va face prima decizia un jucator la intamplarea, "player1" sau "player2" va incepe in dependenta daca variabila pica 1 sau 2

    /// @brief functia data este folosita pentru un start randomizat, incepand la intamplare primul player sau al doilea player
    void randomGenerate();
};


