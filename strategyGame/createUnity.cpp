#include "createUnity.hpp"
#include "listele.hpp"
#include "mainAccount.hpp"
#include "genRandom.hpp"
#include "Paint.hpp"
#include <iostream>
#include <windows.h> 
#include <iostream>
//unitatile
#include "Mag.hpp"

void createUnity::generareUnity() {
	Paint paint;
	genRandom random;
	std::cout << "TEST" << std::endl;
	do 
	{
		bool create = false;
		paint.afisare(-1);
		int selector = 0;
		std::cout << "Generare de unitati: \n1 - Mag\n2 - Undead\n3 - King\n4 - Back" << std::endl;
		std::cin >> selector;

		if (selector == 4)
		{
			std::cout << "Back..." << std::endl;
			Sleep(1000);
			std::system("cls");
			return;
		}
		if (mainAccount::maxOwnedUnity > mainAccount::unity) 
		{
			if (selector == 1 && mainAccount::maxOwnedUnity > mainAccount::unity) //mag
			{
				std::cout << "Generare..." << std::endl;
				Mag mag;
				mag.name = "Mag";
				mag.hp = random.random(30 * mainAccount::levelAccount, 60 * mainAccount::levelAccount);
				mag.power = random.random(25 * mainAccount::levelAccount, 50 * mainAccount::levelAccount);
				mag.magicalPower = random.random(70 * mainAccount::levelAccount, 100 * mainAccount::levelAccount);
				mag.mp = random.random(80 * mainAccount::levelAccount, 120 * mainAccount::levelAccount);
				mag.defence = random.random(20 * mainAccount::levelAccount, 50 * mainAccount::levelAccount);
				listele::magList.emplace_back(mag);
				create = true;
				mainAccount::unity++;
			}
			else if (selector == 2) //undead
			{

			}
			else if (selector == 3) //king
			{

			}
			else
			{
				std::cout << "Alegeti va rog o cifra valida! (1-3)" << std::endl;
				Sleep(2000);
			}
			if (create)
			{
				std::cout << "Unitate generata" << std::endl;
				Sleep(2000);
			}
		}
		else 
		{
			if (mainAccount::maxOwnedUnity <= mainAccount::unity && !create) 
			{
				std::cout << "Ati ajuns la limita de unitati: " << mainAccount::maxOwnedUnity << std::endl;
			}
			else 
			{
				std::cout << "Nu mai detineti nici un punct: " << mainAccount::points << std::endl;
			}
			Sleep(2000);
		}

	} while (true);
}