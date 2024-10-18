#include "Player.hpp"
#include "Painter.hpp"
#include <iostream>

int Player::maxPlayers = 2;

std::string Player::firstPlayer = "";
std::string Player::secondPlayer = "";
bool Player::inseredNames = false;

// Constructor implicit
Player::Player() 
{

}

// Constructor de copiere
Player::Player(const Player& other) 
{
    maxPlayers = other.maxPlayers;
    firstPlayer = other.firstPlayer;
    secondPlayer = other.secondPlayer;
    inseredNames = other.inseredNames;
}

// Constructor cu parametru
Player::Player(const int initialMaxPlayers)
{
    maxPlayers = initialMaxPlayers;
}

// Operator de copiere
Player& Player::operator=(const Player& other) 
{
    if (this != &other) {
        maxPlayers = other.maxPlayers;
        firstPlayer = other.firstPlayer;
        secondPlayer = other.secondPlayer;
        inseredNames = other.inseredNames;
    }
    return *this;
}

// Operator de comparatie
bool Player::operator==(const Player& other) const
{
    return (maxPlayers == other.maxPlayers && firstPlayer == other.firstPlayer &&
        secondPlayer == other.secondPlayer && inseredNames == other.inseredNames);
}

// Operator de afisare
std::ostream& operator<<(std::ostream& os, const Player& player) {
    os << "First Player: " << player.firstPlayer << ", "
        << "Second Player: " << player.secondPlayer << ", "
        << "Max Players: " << player.maxPlayers << ", "
        << "Inserted Names: " << (player.inseredNames ? "Yes" : "No");
    return os;
}

// Operator de citire
std::istream& operator>>(std::istream& is, Player& player) {
    std::clog << "Inserati primul nume: ";
    is >> player.firstPlayer;

    do {
        std::clog << "Inserati al doilea nume: ";
        is >> player.secondPlayer;
        if (player.secondPlayer == player.firstPlayer) {
            std::cerr << "Introduceti un nume diferit fata de primul \n";
        }
    } while (player.secondPlayer == player.firstPlayer);

    return is;
}


void Player::playerName() { // Introducerea numelui

    std::cin >> *this;
}
