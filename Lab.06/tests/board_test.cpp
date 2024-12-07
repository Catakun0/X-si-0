#include "Board.hpp"
#include <gtest/gtest.h>

TEST(BoardTest, constructorul) {
    Board board;
    EXPECT_EQ(board.squere.size(), 9);
    EXPECT_EQ(board.squere[0], "1");
    EXPECT_EQ(board.squere[8], "9");
}

TEST(BoardTest, verificarea_pozitiei) {
    Board board;
    EXPECT_TRUE(board.check_If_is_empty(0));
    EXPECT_FALSE(board.check_If_is_empty(9)); 
}

TEST(BoardTest, testarea_conditiei) {
    Board board;
    board.squere = { "X", "X", "X", "4", "5", "6", "7", "8", "9" }; 
    EXPECT_EQ(board.checkWin(), 1);
}

TEST(BoardTest, constructorul_de_copiere) {
    Board board;
    Board copy(board);
    EXPECT_EQ(copy.squere, board.squere);
}
