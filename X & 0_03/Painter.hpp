#pragma once
#include <iostream>

class Painter{ 
    public: 

    int select1;

    void Draw(int i); //Afisarea datelor necesare inclusiv a tablei

    friend std::istream& operator>>(std::istream& in, Painter& painter);
    friend std::ostream& operator<<(std::ostream& out, const Painter& painter);

}; 
