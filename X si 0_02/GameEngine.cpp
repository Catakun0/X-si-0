#include "GameEngine.hpp"
#include "Painter.hpp"
#include "RandomPlay.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include <string>

void GameEngine::StartGame() {
	Painter painter;
	Player player;
	RandomPlay randomPlay;
	Board board;

	board.inserareaSquer();
	randomPlay.randomGenerate();
	player.playerName(); //introducem numele 
	painter.Draw(5);

	do {

	} while (true);
}
void GameEngine::RestartGame(){

}
void GameEngine::EndGame() {

}