#include "Painter.hpp"
#include "Player.hpp"
#include <iostream> 

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
}