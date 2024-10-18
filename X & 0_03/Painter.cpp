#include "Painter.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include "RandomPlay.hpp"
#include <iostream> 
#include <cstdlib>

Painter::Painter()
{

}

// Constructor de copiere
Painter::Painter(const Painter& other)
{

}

// Operator de copiere
Painter& Painter::operator=(const Painter& other) 
{
	if (this != &other) {
		board = other.board;
		select1 = other.select1;
	}
	return *this;
}

// Operator de comparare
bool Painter::operator==(const Painter& other) const 
{
	return (board == other.board);
}

//operatorul de citire
std::istream& operator>>(std::istream& in, Painter& painter)
{
	int temp;
	bool next = false;
	do 
	{
		in >> temp;
		if (temp > 0 && temp < 10)
		{
			next = true;
		}
		else 
		{
			std::cerr << "Va rog sa introduceti o caseta de la 1 - 9";
			next = false;
		}
	} while (!next);

	painter.select1 = temp - 1;
	return in;
}

//operator de afisare
std::ostream& operator<<(std::ostream& out, const Painter& painter) {
	out << "[" << painter.board->squere[0] << "] " << "[" << painter.board->squere[1] << "] " << "[" << painter.board->squere[2] << "] \n";
	out << "[" << painter.board->squere[3] << "] " << "[" << painter.board->squere[4] << "] " << "[" << painter.board->squere[5] << "] \n";
	out << "[" << painter.board->squere[6] << "] " << "[" << painter.board->squere[7] << "] " << "[" << painter.board->squere[8] << "] \n";
	return out;
}

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
				std::cout << *this; //operatorul de afisare
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
			int checkWin = 0;

			do //verificam daca casuta selectata este libera
			{
				std::cin >> *this; // operatorul de citire

				checkSquer = board->check_If_is_empty(this->select1);
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
						std::cout << "[" << board->squere[index] << "] "; //afisam casuta din board
					} 
					else
					{
						if (RandomPlay::playerStart == 1) //Verificam care jucator merge X sau 0
						{
							board->squere[index] = "X";
							std::cout << "[" << board->squere[index] << "] ";
							RandomPlay::playerStart = 2; //schimbam sa mearga urmatorul jucator
						}
						else
						{
							board->squere[index] = "0";
							std::cout << "[" << board->squere[index] << "] ";
							RandomPlay::playerStart = 1; //schimbam sa mearga urmatorul jucator
						}
					}
				}
				std::cout << std::endl; 
				checkWin = board->checkWin(); //verificam daca exista un castigator 
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