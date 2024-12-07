#include "Painter.hpp"
#include <gtest/gtest.h>
#include <sstream>

TEST(PainterTest, constructorul) {
    Painter painter;
    EXPECT_EQ(painter.board, nullptr);
}

TEST(PainterTest, operatorul_de_copiere) {
    Painter painter1, painter2;
    painter2 = painter1;
    EXPECT_EQ(painter1.board, painter2.board);
}

TEST(PainterTest, operatorul_de_comparatie) {
    Painter painter1, painter2;
    EXPECT_TRUE(painter1 == painter2);
}

TEST(PainterTest, functia_Draw) {
    Painter painter;
    // Mock data and calls to validate functionality
}
