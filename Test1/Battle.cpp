#include "Battle.h"
#include <Windows.h>
#include <conio.h>
#include <stdlib.h>

Battle::Battle(Creature* player, Creature* target): player(player), target(target) {
	system("cls");
	std::cout << "You meet someone!\n";
	stats();
	std::cout << "Press enter to start fight!\n";
	_getch();
}

Battle::~Battle() {
	std::cout << "End battle.. \n";
}

void Battle::fight() {
	system("cls");
	while (!player->die() && !target->die()) {
		int Pattack = player->attack(target);
		std::cout << "\t\t" << Pattack << " =}=========-\t\t"; std::cout << target->getHp() << "\n";
		stats();
		_getch();
		system("cls");
		if (!target->die()) {

			int Mattack = target->attack(player);
			std::cout << "\t" << player->getHp() << "\t\t<== " << Mattack << "\n";
			stats();
			_getch();
			system("cls");
		}
	}
}
void Battle::stats() {
	std::cout << "\-----------------------------\t\t-----------------------------\n";
	std::cout << "\t" << player->getName() << "\t\t\t\t\t" << target->getName() << "\n";
	std::cout << "\t" << "CLASS:\t" << player->getClass() << "\t\t\t\t" << "CLASSS:\t" << target->getClass() << "\n";
	std::cout << "\t" << "HP:\t" << player->getHp() << "\t\t" << "  VS" << "\t\t" << "HP:\t" << target->getHp() << "\n";
	std::cout << "\t" << "DMG:\t" << player->getDamage() << "\t\t\t\t" << "DMG:\t" << target->getDamage() << "\n";
	std::cout << "\t" << "ARMOR:\t" << player->getArmor() << "\t\t\t" << "ARMOR:\t" << target->getArmor() << "\n";
	std::cout << "--" << "---------------------------\t\t-----------------------------\n\n";
}
	
	
