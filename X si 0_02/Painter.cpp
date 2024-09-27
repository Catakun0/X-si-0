#include "Painter.hpp"
#include "Player.hpp"
#include "Board.hpp"
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
	else if (i == 10){
		std::cout << "[1] ""[2] ""[3] \n[4] ""[5] ""[6] \n[7] ""[8] ""[9] \n";
		return;
	}
	else if (5) {
		int select1;
		std::cin >> select1;
		std::cout << "Numărul introdus este: " << select1 << "\n" << std::endl;

		for (int j = 0; i < 9 ;j++) {
			for (int o = 0; o < 3; o++) {
				std::cout << "[" << Board::squere[j + o] << "] " << "[" << Board::squere[j + o ] << "] " << "[" << Board::squere[j + o] << "] " << std::endl;
			}
			return;
		}
	}
	return;
}