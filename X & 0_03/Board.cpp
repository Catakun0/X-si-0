#include "Board.hpp"
#include "iostream"


Board::Board() 
{
	
}

Board::Board(const Board& other) 
{

}
Board::Board(const int initialHightBoard) {

}
Board& Board::operator = (const Board& other) {
	
}
bool Board::operator == (const Board& other) const {

}
std::ostream& operator << (std::ostream os, const Board& board) {

}
std::istream& operator >> (std::istream is, Board& board) {

}

void Board::initializareaTablei() 
{
	for (int i = 0; i < 9; i++)
	{
		squere[i] = std::to_string(i + 1);
	}
	return;
}

bool Board::check_If_is_empty(int position) { //verificam daca positioa data este goala, deci nu trb sa se afle acolo "X" SAU "0"

	if (squere[position] != "0" && squere[position] != "X")
	{
		return true;
	}
	else
	{
		return false;
	}
}
int Board::checkWin() { //verificam daca este un castigator sau daca e remiza

	std::string selector = "X";
	for (int j = 1; j < 3; j++) // facem 2 verificari la rand pentru X si pentru 0
	{
		if (j == 1) 
		{
			selector = "X";
		}
		else 
		{
			selector = "0";
		}

		for (int i = 0; i < 3; i++) //verificam orizontal
		{
			if (squere[i * 3] == selector && squere[i * 3 + 1] == selector && squere[i * 3 + 2] == selector) 
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

		for (int i = 0; i < 3; i++) //verificam vertical
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

		if (squere[0] == selector && squere[4] == selector && squere[8] == selector) //verificam pe diagonala
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
		else if (squere[2] == selector && squere[4] == selector && squere[6] == selector) //verificam pe diagonala
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

	int j = 0;
	for (int i = 0; i < 9; i++) //verificam in cazul in care nu exista nici un castigator, daca toate casutele sunt ocupate, in cazul in care sunt toate ocupate si nu exista castigator rezulta ca e remiza
	{
		if (squere[i] == "0" || squere[i] == "X")
		{
			j++;
		}
	}
	if (j == 9)
	{
		return 3;
	}
	return 0;
}

