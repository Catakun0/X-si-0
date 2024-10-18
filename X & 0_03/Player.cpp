#include "Player.hpp"
#include "Painter.hpp"
#include <iostream>

int Player::maxPlayers = 2;

std::string Player::firstPlayer = "";
std::string Player::secondPlayer = "";
bool Player::inseredNames = false;

Player::Player()
{

}

Player::Player(const Player& other)
{

}
Player::Player(const int initialMaxPlayers) {

}
Player& Player::operator = (const Player& other) {

}
bool Player::operator == (const Player& other) const {

}
std::ostream& operator << (std::ostream os, const Player& player) {

}
std::istream& operator >> (std::istream is, Player& player) {

}

void Player::playerName() { // Introducerea numelui

    int selector = 0;
    bool next = false;
    do 
    {
        if (!inseredNames) //introducem numele jucatorilor in cazul in care nu am facuto deja
        {
            std::cout << "Introduceti numele first_Player: \n";
            std::cin >> Player::firstPlayer;

            std::cout << "Introduceti numele second_Player: \n";
            do 
            {
                std::cin >> Player::secondPlayer;
                if (secondPlayer != firstPlayer) //verificam sa nu fie aceliasi nume introduse la fel
                {
                    next = true;
                }
                else
                {
                    std::cout << "Introduceti va rog un nume diferit fata de primul: \n";
                }

            } while (!next);

            std::cout << "Au fost introdusi jucatorii: " << Player::firstPlayer << " - " << Player::secondPlayer << std::endl;
            inseredNames = true; 
            return;
        }
        else //in cazul in care dorim dupa finisarea unuei partide alegem sa jucam din nou, putem sa jucam cu numele care au fost deja introdus sau sa introducem unele noi
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
