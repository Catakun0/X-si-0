#include "GameEngine.hpp"
#include "Painter.hpp"
#include "RandomPlay.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include <iostream>

GameEngine::GameEngine()
{

}
GameEngine::GameEngine(const GameEngine& other)
{

}
GameEngine::GameEngine(const bool startGame) {

}
GameEngine& GameEngine::operator = (const GameEngine& other) {

}
bool GameEngine::operator == (const GameEngine& other) const {

}
std::ostream& operator << (std::ostream os, const GameEngine& gameEngine) {

}
std::istream& operator >> (std::istream is, GameEngine& gameEngine) {

}

void GameEngine::StartGame() {
	//instantele
	Player player;
	RandomPlay randomPlay;
	Board boardOriginal;
	Painter painter(&boardOriginal); //aici folosim operatorul cu parametri care primeste un obect de tip Board

	do 
	{
		boardOriginal.initializareaTablei(); //recreem tabla
		player.playerName(); //introducem numele 
		randomPlay.randomGenerate(); //incepe la intaplare primul sau al doilea player
		painter.Draw(1); //afiseaza jocul
		painter.Draw(2); //meniul de final

	} while (true);
}