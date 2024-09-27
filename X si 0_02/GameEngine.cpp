#include "GameEngine.hpp"
#include "Painter.hpp"
#include "RandomPlay.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include <iostream>

void GameEngine::StartGame() {
	Painter painter;
	Player player;
	RandomPlay randomPlay;
	Board board;

	do 
	{
		board.inserareaSquer(); //inseram tabla de la 1-9
		randomPlay.randomGenerate(); //incepe la intaplare primul sau al doilea player
		player.playerName(); //introducem numele 
		painter.Draw(3); //afiseaza jocul
		painter.Draw(4);

	} while (true);
}