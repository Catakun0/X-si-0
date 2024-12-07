#include "Player.hpp"
#include <gtest/gtest.h>

TEST(PlayerTest, DefaultConstructor) {
    Player player;
    EXPECT_EQ(Player::maxPlayers, 2);
    EXPECT_EQ(Player::firstPlayer, "");
    EXPECT_EQ(Player::secondPlayer, "");
    EXPECT_EQ(Player::inseredNames, false);
}

TEST(PlayerTest, ParameterizedConstructor) {
    Player player(4);
    EXPECT_EQ(Player::maxPlayers, 4);
}

TEST(PlayerTest, CopyConstructor) {
    Player original(4);
    Player copy(original);
    EXPECT_EQ(copy.maxPlayers, 4);
    EXPECT_EQ(copy.firstPlayer, "");
    EXPECT_EQ(copy.secondPlayer, "");
}

TEST(PlayerTest, AssignmentOperator) {
    Player player1(3);
    Player player2;
    player2 = player1;
    EXPECT_EQ(player2.maxPlayers, 3);
}

TEST(PlayerTest, EqualityOperator) {
    Player player1(2);
    Player player2(2);
    EXPECT_TRUE(player1 == player2);
}

TEST(PlayerTest, InputOutputOperators) {
    Player player;
    std::istringstream input("Alice\nBob\n");
    input >> player;
    EXPECT_EQ(Player::firstPlayer, "Alice");
    EXPECT_EQ(Player::secondPlayer, "Bob");

    std::ostringstream output;
    output << player;
    EXPECT_NE(output.str().find("Alice"), std::string::npos);
    EXPECT_NE(output.str().find("Bob"), std::string::npos);
}
