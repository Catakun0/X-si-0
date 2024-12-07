#include "RandomPlay.hpp"
#include <cassert>
#include <iostream>

void testRandomPlayClass() {
    // Test default constructor
    RandomPlay rp1;
    assert(rp1.playerStart == 0); // Default value should be 0

    // Test constructor with parameter
    RandomPlay rp2(1);
    assert(rp2.playerStart == 1);

    // Test randomGenerate method
    rp2.randomGenerate();
    assert(rp2.playerStart == 1 || rp2.playerStart == 2);  // Should be either 1 or 2

    std::cout << "RandomPlay class tests passed!" << std::endl;
}

int main() {
    testRandomPlayClass();
    return 0;
}
