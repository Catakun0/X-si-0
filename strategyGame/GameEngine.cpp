#include "GameEngine.hpp"
#include "createEnemy.hpp"
#include "createUnity.hpp"
#include "Paint.hpp"
#include <iostream>

void GameEngine::startRound() {
	createEnemy createEnemy_now;
	createUnity createUnity_now;
	Paint paint;
	createEnemy_now.generareEnemy(5);
	createUnity_now.generareUnity(3);
	paint.afisare(0);

	do 
	{

	} while (true);
}