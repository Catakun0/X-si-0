#include "Painter.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include "RandomPlay.hpp"
#include <iostream> 
#include <cstdlib>


void Painter::Draw(int i) {
	if (i == 1) 
	{
		bool enterNow = true; //bool pentru a afisa doar o data modelul
		do 
		{
			if (enterNow) //afisam tabla de start ca model
			{
				std::system("cls"); // curatam ecranul
				std::cout << "\n Sa inceapa jocul \n\n";
				std::cout << "[" << Board::squere[0] << "] " << "[" << Board::squere[1] << "] " << "[" << Board::squere[2] << "] \n";
				std::cout << "[" << Board::squere[3] << "] " << "[" << Board::squere[4] << "] " << "[" << Board::squere[5] << "] \n";
				std::cout << "[" << Board::squere[6] << "] " << "[" << Board::squere[7] << "] " << "[" << Board::squere[8] << "] \n";
				std::cout << "\n Numele jucătorilor: " << Player::firstPlayer << " si " << Player::secondPlayer << "\n" << std::endl;
				enterNow = false;
			}

			if (RandomPlay::playerStart == 1) // Verificam care jucator incepe
			{
				std::cout << "Jucatorul- " << Player::firstPlayer << " -merge > ";
			}
			else
			{
				std::cout << "Jucatorul- " << Player::secondPlayer << " -merge > ";
			}

			bool checkSquer = false;
			int select1 = 0;
			bool next = false;
			int checkWin = 0;
			do //verificam daca casuta selectata este libera
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
			if (!checkWin)
			{
				std::system("cls");
			}
			for (int j = 0; j < 3; j++) { //verificam fiecare iandex/ casuta din board
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
							RandomPlay::playerStart = 2; //schimbam sa mearga urmatorul jucator
						}
						else
						{
							Board::squere[index] = "0";
							std::cout << "[" << Board::squere[index] << "] ";
							RandomPlay::playerStart = 1; //schimbam sa mearga urmatorul jucator
						}
					}
				}
				std::cout << std::endl; 
				checkWin = Board::checkWin(); //verificam daca exista un castigator 
				if (checkWin == 1)
				{
					std::cout << "Castigatorul este: " << Player::firstPlayer << std::endl;
					return;
				}
				else if (checkWin == 2)
				{
					std::cout << "Castigatorul este: " << Player::secondPlayer << std::endl;
					return;
				}
				else if (checkWin == 3)
				{
					std::cout << "\nRemiza! ";
					return;
				}
			}

		} while (true);
	}
	else if (i == 2) // meniul de final
	{
		do
		{
			int selector = 0;
			std::cout << "Doriti sa mai jucati sau inchideti jocul: \n 1 - Restart \n 2 - Quit \n";
			std::cin >> selector;

			if (selector == 1)
			{
				std::system("cls");
				return;
			}
			else if (selector == 2)
			{
				exit(0);
			}
			else
			{
				std::cout << "Va rog sa introduceti un numar valid 1-2 \n\n";
			}

		} while (true);
	}
	return;
}