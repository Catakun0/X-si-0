#include "Painter.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include "RandomPlay.hpp"
#include <iostream> 
#include <string>

std::string Painter::player1Name = "";
std::string Painter::player2Name = "";

void Painter::Draw(int i) {
	if (i == 1) {
		std::cout << "Sa inceapa jocul \n";

		return;
	}
	else if (i == 2) {
		std::cout << "Numele jucătorilor: " << player1Name << " si " << player2Name << std::endl;

		return;
	}
	else if (5) 
	{
		do 
		{
			if (RandomPlay::playerStart == 1) // Verificam care jucator incepe
			{
				std::cout << "Jucatorul- " << player1Name << " -merge > ";
			}
			else
			{
				std::cout << "Jucatorul- " << player2Name << " -merge > ";
			}

			bool checkSquer = false;
			int select1 = 0;
			bool next = false;
			int checkWin = 0;
			do // verificam daca este loc liber
			{
				do 
				{
					std::cin >> select1;
					if (select1 > 0 && select1 < 10) 
					{
						next = true;
					}
					else 
					{
						std::cout << "Va rog sa introduceti o caseta de la [1 & 9] \n";
						next = false;
					}
				} while (!next);
				select1--;
				checkSquer = Board::check_If_is_empty(select1);
				if (!checkSquer) 
				{
					std::cout << "Alege o casuta liber \n";
				}
			} while (!checkSquer);

			for (int j = 0; j < 3; j++) {
				for (int i = 0; i < 3; i++) {
					int index = j * 3 + i;
					if (index != select1)
					{
						std::cout << "[" << Board::squere[index] << "] "; //afisam casuta din board
					}
					else
					{
						if (RandomPlay::playerStart == 1) //Verificam care jucator merge X sau 0
						{
							Board::squere[index] = "X";
							std::cout << "[" << Board::squere[index] << "] ";
							RandomPlay::playerStart = 2;
						}
						else
						{
							Board::squere[index] = "0";
							std::cout << "[" << Board::squere[index] << "] ";
							RandomPlay::playerStart = 1;
						}
					}
				}
				std::cout << std::endl;
				checkWin = Board::checkWin();
				if (checkWin == 1)
				{
					std::cout << "Castigatorul este: " << player1Name << std::endl;
					return;
				}
				else if (checkWin == 2)
				{
					std::cout << "Castigatorul este: " << player2Name << std::endl;
					return;
				}
			}

		} while (true);
	}
	return;
}