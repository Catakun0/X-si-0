#include "RandomPlay.hpp"
#include <gtest/gtest.h>

TEST(RandomPlayTest, DefaultConstructor) {
    RandomPlay randomPlay;
    EXPECT_EQ(RandomPlay::playerStart, 0);
}

TEST(RandomPlayTest, RandomGenerate) {
    RandomPlay randomPlay;
    randomPlay.randomGenerate();
    EXPECT_TRUE(RandomPlay::playerStart == 1 || RandomPlay::playerStart == 2);
}
