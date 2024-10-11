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
	Board boardOriginal; //creem un obect origianl
	Board boardCopy(boardOriginal); //si aici fiind in "start" obectul, boardCopy va fi egal cu boardOriginal, apeland constructorul
	Painter painter(&boardCopy);

	do 
	{
		boardCopy = boardOriginal;
		randomPlay.randomGenerate(); //incepe la intaplare primul sau al doilea player
		player.playerName(); //introducem numele 
		painter.Draw(1); //afiseaza jocul
		painter.Draw(2); //meniul de final

	} while (true);
}