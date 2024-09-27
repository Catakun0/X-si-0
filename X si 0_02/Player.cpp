#include "Player.hpp"
#include "Painter.hpp"
#include <iostream>
#include <string> 

int Player::maxPlayers = 2;

void Player::playerName() { // Introducerea numelui

    std::cout << "Introduceti numele first_Player: ";
    std::getline(std::cin, Painter::player1Name); 

    std::cout << "Introduceti numele second_Player: ";
    std::getline(std::cin, Painter::player2Name); 
}
