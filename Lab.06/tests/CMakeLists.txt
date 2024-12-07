cmake_minimum_required(VERSION 3.14)
project(GameTests)

set(CMAKE_CXX_STANDARD 17)

# Adaugă biblioteca Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Adaugă testele
add_executable(GameTests
    PlayerTests.cpp
    BoardTests.cpp
    PainterTests.cpp
)

target_link_libraries(GameTests ${GTEST_LIBRARIES} pthread)
