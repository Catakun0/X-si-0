#include "createUnity.hpp"
#include "Unitati.hpp"
#include "listele.hpp"
#include <iostream>

void createUnity::generareUnity(int count) {
	int i = 0;
	do 
	{
		Unitati unitati;
		unitati.unityName = "MyUnity " + std::to_string(i);
		unitati.unityHP = 100;
		unitati.unityPower = 40;
		unitati.unityDefence = 200;
		listele::unityList.emplace_back(unitati);
		i++;
		if (i > count) 
		{
			return;
		}
	} while (true);
}