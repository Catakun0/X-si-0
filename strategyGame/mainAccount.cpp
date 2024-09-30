#include "mainAccount.hpp"

int mainAccount::levelAccount = 0;
int mainAccount::maxOwnedUnity = 0;
int mainAccount::unity = 0;
int mainAccount::points = 0;

void mainAccount::managementAccount() {
	unity = 0;
	points = 2;
	levelAccount = 3;
	maxOwnedUnity = 3;
	return;
}