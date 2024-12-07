#include "Board.hpp"
#include <gtest/gtest.h>

TEST(BoardTest, DefaultConstructor) {
    Board board;
    EXPECT_EQ(board.squere.size(), 9);
    EXPECT_EQ(board.squere[0], "1");
    EXPECT_EQ(board.squere[8], "9");
}

TEST(BoardTest, CheckIfIsEmpty) {
    Board board;
    EXPECT_TRUE(board.check_If_is_empty(0));
    EXPECT_FALSE(board.check_If_is_empty(9)); // Out of range
}

TEST(BoardTest, CheckWinCondition) {
    Board board;
    board.squere = { "X", "X", "X", "4", "5", "6", "7", "8", "9" }; // Horizontal win
    EXPECT_EQ(board.checkWin(), 1);
}

TEST(BoardTest, CopyConstructor) {
    Board board;
    Board copy(board);
    EXPECT_EQ(copy.squere, board.squere);
}
