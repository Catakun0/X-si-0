#include "GameEngine.hpp"
#include "Painter.hpp"
#include "RandomPlay.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include <iostream>

void GameEngine::StartGame() {
	//instantele
	Player player;
	RandomPlay randomPlay;
	Board board1;
	Board board2;
	Painter painter(&board2);

	do 
	{
		board2 = board1;
		randomPlay.randomGenerate(); //incepe la intaplare primul sau al doilea player
		player.playerName(); //introducem numele 
		painter.Draw(1); //afiseaza jocul
		painter.Draw(2); //meniul de final

	} while (true);
}