#pragma once
#include <iostream>
#include "Board.hpp"
#include "Painter_abstract.hpp"
#include <memory>

/// @brief Clasa data este folosita pentru afisarea tuturor datelor importante, mai exact a tablei, jucatorul curent ce merge, numele jucatorilor, meniul de final, informatiile de final..etc
class Painter : public Painter_abstract
{ 
    public: 
    int select1;

    /// @brief Constructor implicit ce este apelat automat la crearea instantei
    Painter(); 

    /// @brief Constructor de copiere, pentru a putea face o copie
    /// @param other reprezinta obiectul cu care dorim sa ii facem copia
    Painter(const Painter& other); 

    /// @brief Constructorul cu parametri are posibilitatea sa primeasca o variabila de tipul parametrului identificat in constructor
    /// @param board reprezinta un parametru de tip clasei Board pe care o primesc ca smartPointer
    Painter(std::shared_ptr<Board> b) : board(b){} 

    /// @brief Operatorul de copiere este folosit pentru copierea unei clase oferind o dinamica mai buna
    /// @param other reprezinta obectul pe care il va copia
    /// @return returneaza rezultatul dupa copiere
    Painter& operator = (const Painter& other);

    /// @brief Operatorul de comparatie este folosit pentru a compara o logica daca este adevarata sau nu
    /// @param other Primeste o clasa cu care face comparatia
    /// @return returneaza true sau false in depedenta logicei din bloc
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

    /// @brief Operatorul de citire este folosit pentru introducerea coordonatelor pentru board in selectarea zonei pe care dorim sa o marca intre 1-9
    /// @param in Parametrul dat reprezinta coordonata care a fost introdusa de la tastatura
    /// @param painter reprezinta clasa principala care si este modificata 
    /// @return returneaza variabila "in" dupa ce este verificata daca este in intervalul de 1-9, nu mai mare nu mai mic
    friend std::istream& operator>>(std::istream& in, Painter& painter); 

    /// @brief Operatorul de afisare este folosit pentru a afisa boardul prin simpla apelare a sa
    /// @param out variabila data este continutul si intregul array a board-ului care a fost incarcat in momentul apelarii operatorului
    /// @param painter acest parametru acceseaza clasa Painter pentru a prelua smartPoiterul care ia fost trimis in momentul creeri instantei prin care se apeleaza poterul de tip Board
    /// @return returneaza "out" astfel afisinduse intreg boardul actualizat
    friend std::ostream& operator<<(std::ostream& out, const Painter& painter); 
    private:

    std::shared_ptr<Board> board;
}; 
