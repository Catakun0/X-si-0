#pragma once
#include <iostream>

/// @brief Clasa data este folosita pentru inserarea celor 2 nume a jucatorilor care vor fi in partida curenta
class Player{ 
public:
    static int maxPlayers; //Jucatori maxim intro partida

    /// @brief Functia data este folosita pentru a insera denumirele player-ilor (firsPlayer si secondPlayer)
    void playerName();

    static std::string firstPlayer, secondPlayer; //variabelele pentru numele jucatorilor
    static bool inseredNames; //un bool care va fi true in cazul in care am introdus o data numele jucatorilor

    /// @brief Constructor implicit ce este apelat automat la crearea instantei
    Player(); 

    /// @brief Constructor de copiere, pentru a putea face o copie
    /// @param other reprezinta obiectul cu care dorim sa ii facem copia
    Player(const Player& other);

    /// @brief Constructorul cu parametri are posibilitatea sa primeasca o variabila de tipul parametrului identificat in constructor
    /// @param initialMaxPlayers reprezinta variabila pe care o primeste
    Player(const int initialMaxPlayers); 

    /// @brief Operatorul de copiere este folosit pentru copierea unei clase oferind o dinamica mai buna
    /// @param other reprezinta obectul pe care il va copia
    /// @return returneaza rezultatul dupa copiere
    Player& operator = (const Player& other);

    /// @brief Operatorul de comparatie este folosit pentru a compara o logica daca este adevarata sau nu
    /// @param other Primeste o clasa cu care face comparatia
    /// @return returneaza true sau false in depedenta logicei din bloc
    bool operator==(const Player& other) const; 

    /// @brief Operatorul de afisare este folosit pentru a putea afisa un numar de date dorit prin simpla apelare
    /// @param os Variabila care stochiaza toate datele pentru afisare
    /// @param player Clasa de care are nevoie de a prelua informatiile de care are nevoie
    /// @return returneaza "os" afisinduse datele stocate
    friend std::ostream& operator << (std::ostream& os, const Player& player); 

    /// @brief Operatorul de citire este folosit in momentul in care dorim sa citim de la tastatura o anumita informatie
    /// @param is variabila care stochiaza informatia introdusa de la tastatura
    /// @param player clasa de care are nevoie pentru logica din bloc 
    /// @return returneaza "is" informatia care a fost introdusa la tastatura
    friend std::istream& operator >> (std::istream& is, Player& player);
};