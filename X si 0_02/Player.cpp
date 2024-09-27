#include "Player.hpp"
#include "Painter.hpp"
#include <iostream>

int Player::maxPlayers = 2;

std::string Player::firstPlayer = "";
std::string Player::secondPlayer = "";

void Player::playerName() { // Introducerea numelui

    std::cout << "Introduceti numele first_Player: \n";
    std::cin >> Player::firstPlayer;

    std::cout << "Introduceti numele second_Player: \n";
    std::cin >> Player::secondPlayer;

    std::cout << "Au fost introdusi jucatorii: " << Player::firstPlayer << " - " << Player::secondPlayer << std::endl;
}
