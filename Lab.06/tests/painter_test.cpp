#include "Painter.hpp"
#include <cassert>
#include <iostream>

void testPainterClass() {
    // Test default constructor
    Painter p1;
    
    // Test copy constructor
    Painter p2 = p1;

    // Test assignment operator
    Painter p3;
    p3 = p1;
    assert(p3 == p1);

    std::cout << "Painter class tests passed!" << std::endl;
}

int main() {
    testPainterClass();
    return 0;
}
