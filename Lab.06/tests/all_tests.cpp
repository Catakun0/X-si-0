#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "Player.hpp"
#include "RandomPlay.hpp"
#include "Painter.hpp"
#include "Board.hpp"

TEST_CASE("Player - Teste constructori și operatori") {
    SECTION("Constructor implicit") {
        Player p1;
        REQUIRE(Player::maxPlayers == 2);
        REQUIRE(Player::firstPlayer == "");
        REQUIRE(Player::secondPlayer == "");
        REQUIRE(Player::inseredNames == false);
    }

    SECTION("Constructor de copiere și operatorul de copiere") {
        Player p1;
        Player::firstPlayer = "John";
        Player::secondPlayer = "Doe";

        Player p2 = p1;
        REQUIRE(p2 == p1);

        Player p3;
        p3 = p1;
        REQUIRE(p3 == p1);
    }

    SECTION("Operatorul de egalitate") {
        Player p1, p2;
        REQUIRE(p1 == p2);
        Player::firstPlayer = "Alice";
        REQUIRE_FALSE(p1 == p2);
    }
}

TEST_CASE("RandomPlay - Teste funcționalitate") {
    SECTION("Random generation") {
        RandomPlay r1;
        r1.randomGenerate();
        REQUIRE((RandomPlay::playerStart == 1 || RandomPlay::playerStart == 2));
    }

    SECTION("Operatori") {
        RandomPlay r1, r2;
        REQUIRE(r1 == r2);
    }
}

TEST_CASE("Painter - Teste operatori și metode") {
    SECTION("Operatori de afișare și citire") {
        Board board;
        Painter painter;
        painter.board = &board;

        std::ostringstream outStream;
        outStream << painter;
        REQUIRE(outStream.str().find("[1] [2] [3]") != std::string::npos);
    }
}

TEST_CASE("Board - Teste funcționalitate") {
    SECTION("Inițializare tabla") {
        Board board;
        REQUIRE(board.squere.size() == 9);
        REQUIRE(board.squere[0] == "1");
    }

    SECTION("Verificare casete libere") {
        Board board;
        REQUIRE(board.check_If_is_empty(0));
        board.squere[0] = "X";
        REQUIRE_FALSE(board.check_If_is_empty(0));
    }

    SECTION("Verificare câștig") {
        Board board;
        board.squere = {"X", "X", "X", "4", "5", "6", "7", "8", "9"};
        REQUIRE(board.checkWin() == 1); // "X" câștigă

        board.squere = {"O", "O", "O", "4", "5", "6", "7", "8", "9"};
        REQUIRE(board.checkWin() == 2); // "O" câștigă
    }
}
