#include <gtest/gtest.h>
#include "Player.hpp"

// Test pentru constructorul implicit
TEST(PlayerTests, DefaultConstructor) {
    Player player;
    EXPECT_EQ(Player::maxPlayers, 2);
    EXPECT_EQ(Player::firstPlayer, "");
    EXPECT_EQ(Player::secondPlayer, "");
    EXPECT_FALSE(Player::inseredNames);
}

// Test pentru constructorul de copiere
TEST(PlayerTests, CopyConstructor) {
    Player original(3);
    Player copy = original;

    EXPECT_EQ(copy.maxPlayers, original.maxPlayers);
}

// Test pentru operatorul de copiere
TEST(PlayerTests, CopyAssignment) {
    Player player1(4);
    Player player2;
    player2 = player1;

    EXPECT_EQ(player2.maxPlayers, player1.maxPlayers);
}

// Test pentru operatorul de comparare
TEST(PlayerTests, EqualityOperator) {
    Player player1(2);
    Player player2(2);

    EXPECT_TRUE(player1 == player2);
}

// Test pentru operatorul de intrare
TEST(PlayerTests, InputOperator) {
    Player player;
    std::istringstream input("Alice\nBob\n");
    std::cin.rdbuf(input.rdbuf()); // Suprascriere pentru test

    player.playerName();

    EXPECT_EQ(Player::firstPlayer, "Alice");
    EXPECT_EQ(Player::secondPlayer, "Bob");
}

// Test pentru operatorul de ieșire
TEST(PlayerTests, OutputOperator) {
    Player player;
    Player::firstPlayer = "Alice";
    Player::secondPlayer = "Bob";
    Player::maxPlayers = 2;

    std::ostringstream output;
    output << player;

    EXPECT_EQ(output.str(), "First Player: Alice, Second Player: Bob, Max Players: 2, Inserted Names: No");
}
