#include "GameEngine.hpp"
#include "createEnemy.hpp"
#include "createUnity.hpp"
#include "Paint.hpp"
#include "mainAccount.hpp"
#include <iostream>

void GameEngine::startRound() {
	createEnemy createEnemy_now;
	createUnity createUnity_now;
	Paint paint;
	mainAccount mainAccount_now;
	//start the first game
	mainAccount_now.managementAccount();
	createUnity_now.generareUnity();
	paint.afisare(0);

	do 
	{

	} while (true);
}