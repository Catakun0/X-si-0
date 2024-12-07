#include "Board.hpp"
#include <cassert>
#include <iostream>

void testBoardClass() {
    // Test default constructor
    Board b1;
    assert(b1.squere.size() == 9);

    // Test copy constructor
    Board b2 = b1;
    assert(b2.squere == b1.squere);

    // Test check_If_is_empty method
    bool isEmpty = b1.check_If_is_empty(0);
    assert(isEmpty == true);  // Should return true for an empty board position

    // Test checkWin method
    int winStatus = b1.checkWin();
    assert(winStatus == 0);  // No winner in the initial empty board

    std::cout << "Board class tests passed!" << std::endl;
}

int main() {
    testBoardClass();
    return 0;
}
