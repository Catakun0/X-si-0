#include "Player.hpp"
#include <cassert>
#include <iostream>

void testPlayerClass() {
    // Test default constructor
    Player p1;
    assert(p1.firstPlayer == "");
    assert(p1.secondPlayer == "");
    assert(p1.maxPlayers == 2);
    assert(p1.inseredNames == false);

    // Test constructor with parameter
    Player p2(3);
    assert(p2.maxPlayers == 3);

    // Test copy constructor
    Player p3 = p2;
    assert(p3.maxPlayers == 3);

    // Test assignment operator
    Player p4;
    p4 = p3;
    assert(p4.maxPlayers == 3);

    // Test comparison operator
    assert(p2 == p3);

    std::cout << "Player class tests passed!" << std::endl;
}

int main() {
    testPlayerClass();
    return 0;
}
