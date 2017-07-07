#include "Battle.h"
#include <Windows.h>

Battle::Battle(Creature* player, Creature* target): player(player), target(target) {
	std::cout << "Start battle: \n";
}

Battle::~Battle() {
	std::cout << "End battle.. \n";
}

void Battle::fight(){
	//PLAYER -> MOB
	std::cout << "----------------------\t\t----------------------\n";
	std::cout << "\t" << player->getName() << "\t\t\t\t" << target->getName() << "\n";
	std::cout << "\t" << player->getHp() <<"\t\t\t\t" << target->getHp() << "\n";
	std::cout << "--" << "--------------------\t\t----------------------\n\n";
	int Pattack = player->attack(target);
	std::cout << "\t\t\t" << Pattack << " ==>\t\t"; std::cout << target->getHp();
	std::cout<<"\n\n\n\n\n\n\n\n\n\n\n";

	Sleep(5500);

	//MOB -> PLAYER
	std::cout << "----------------------\t\t----------------------\n";
	std::cout << "\t" << player->getName() << "\t\t\t\t" << target->getName() << "\n";
	std::cout << "\t" << player->getHp() << "\t\t\t\t" << target->getHp() << "\n";
	std::cout << "--" << "--------------------\t\t----------------------\n\n";
	int Mattack = target->attack(player);
	std::cout << "\t" << player->getHp() << "\t\t<== " << Mattack;
	std::cout << "\n\n\n\n\n\n\n\n\n\n\n";
	//std::cout << "=====  " << "Otrzymal: " << dmg << " obrazen.\n\n\n";
	Sleep(5500);
	
	
}