#include "Painter.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include "RandomPlay.hpp"
#include <iostream> 
#include <cstdlib>
#include "json-develop/include/nlohmann/json.hpp"
#include <fstream>
using json = nlohmann::json;

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
			std::cerr << "Va rog sa introduceti o caseta de la 1 - 9" << std::endl;
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
				std::cout << "\n Numele jucatorilor: " << Player::firstPlayer << " si " << Player::secondPlayer << "\n" << std::endl;
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
					UpdateScore(true);
					return;
				}
				else if (checkWin == 2)
				{
					std::cout << "Castigatorul este: " << Player::secondPlayer << std::endl;
					UpdateScore(false);
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
			LoadDataFromJson("scores.json");
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

void Painter::UpdateScore(bool firstPlayer) 
{
    std::ifstream inputFile("scores.json");
    if (!inputFile.is_open()) 
	{
        std::cerr << "nu sa putut de deschis fisierul json" << std::endl;
        return;
    }

    try 
	{
        json j;
        inputFile >> j;  
        inputFile.close();  

        if (firstPlayer) {
            j["Player1"] = j.value("Player1", 0) + 1;
        } 
		else 
		{
            j["Player2"] = j.value("Player2", 0) + 1;
        }

        std::ofstream outputFile("scores.json");
        if (!outputFile.is_open())
		{
            std::cerr << "nu sa deschis fisierul json" << std::endl;
            return;
        }
        outputFile << j.dump(4); 
        outputFile.close();
        std::cout << "Scorurile au fost actualizate!" << std::endl;
    } 
	catch (const std::exception& e)
	{
        std::cerr << "Eroare la procesarea fisierului JSON: " << e.what() << std::endl;
    }
}


void Painter::LoadDataFromJson(const std::string& filename) 
{
    std::ifstream inputFile(filename);
    if (!inputFile.is_open()) 
	{
        std::cerr << "nu sa putut de deschis fisierul json " << filename << std::endl;
        return;
    }

    try 
	{
        json j;
        inputFile >> j; 

        int player1Wins = j.value("Player1", 0);
        int player2Wins = j.value("Player2", 0); 

        std::cout << "Datele din JSON: " << std::endl;
        std::cout << "Player1 a castigat de " << player1Wins << " ori." << std::endl;
        std::cout << "Player2 a castigat de " << player2Wins << " ori." << std::endl;

    } 
	catch (const std::exception& e) 
	{
        std::cerr << "Eroare la citirea JSON: " << e.what() << std::endl;
    }
}
