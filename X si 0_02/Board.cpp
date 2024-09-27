#include "Board.hpp"
#include "string"
#include "iostream"


std::string Board::squere[8];

void Board::inserareaSquer() {
	for (int i = 0; i < 9; i++) 
	{
		squere[i] = std::to_string(i + 1);
	}
	return;
}

bool Board::check_If_is_empty(int position) {

	if (squere[position] != "0" && squere[position] != "X")
	{
		return true;
	}
	else
	{
		return false;
	}
}
int Board::checkWin() {

	std::string selector = "X";

	for (int i = 0; i < 3; i++) 
	{
		if (squere[i * 3] == selector && squere[i * 3 + 1] == selector && squere[i * 3 + 2] == selector) //verificam linele orizontale
		{
			if (selector == "X")
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
	}

	for (int i = 0; i < 3; i++) 
	{
		if (squere[i] == selector && squere[i + 3] == selector && squere[i + 6] == selector)
		{
			if (selector == "X")
			{
				return 1;
			}
			else
			{
				return 2;
			}
		}
	}

	if (squere[0] == selector && squere[4] == selector && squere[8] == selector) //verificam linele verticale
	{
		if (selector == "X")
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	else if (squere[2] == selector && squere[4] == selector && squere[6] == selector)
	{
		if (selector == "X")
		{
			return 1;
		}
		else
		{
			return 2;
		}
	}
	return 0;
}

