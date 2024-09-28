#include "Player.hpp"
#include "Painter.hpp"
#include <iostream>

int Player::maxPlayers = 2;

std::string Player::firstPlayer = "";
std::string Player::secondPlayer = "";
bool Player::inseredNames = false;

void Player::playerName() { // Introducerea numelui

    int selector = 0;
    do 
    {
        if (!inseredNames)
        {
            std::cout << "Introduceti numele first_Player: \n";
            std::cin >> Player::firstPlayer;

            std::cout << "Introduceti numele second_Player: \n";
            std::cin >> Player::secondPlayer;

            std::cout << "Au fost introdusi jucatorii: " << Player::firstPlayer << " - " << Player::secondPlayer << std::endl;
            inseredNames = true;
            return;
        }
        else
        {
            std::cout << "Numele introduse au fost " << firstPlayer << " Si " << secondPlayer << "\nDoriti sa schimbati numele jucatorilor? \n 1 - Yes \n 2 - NO" << std::endl;

            std::cin >> selector;
            if (selector == 1)
            {
                inseredNames = false;
            }
            else
            {
                return;
            }
        }

    } while (true);
}
