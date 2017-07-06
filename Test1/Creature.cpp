#include "Creature.h"
#include <iostream>

Creature::Creature(std::string name, std::string classa, int hp, int armor, int level) :_name(name), _class(classa), _hp(hp), _armor(armor), _level(level) {
	std::cout << "CREATURE CONSTR\n";
}

Creature::~Creature(){
	std::cout << "CREATURE DESTR\n";
}

void Creature::showData() {
	std::cout << "Name: " << _name << "\n";
	std::cout << "Level: " << _level << "\n";
	std::cout << "Class: " << _class << "\n";
	std::cout << "Heal Points: " << _hp << "\n";
	std::cout << "Armor: " << _armor << "\n";
}

bool Creature::die() {
	if (_hp <= 0)
		return true;
	else
		return false;
}

//PLAYER
Player::Player(std::string name, std::string classa, int hp, int armor, int level, int bagSize) : Creature(name, classa, hp, armor, level), _bagSize(bagSize) {
	std::cout << "PLAYER CONSTR\n";
}

void Player::showData() {
	Creature::showData();
	std::cout << "Bagsize: " << _bagSize << "\n";
}


//MOB
Mob::Mob(std::string name, std::string classa, int hp, int armor, int level, int firedamage) : Creature(name, classa, hp, armor, level), _fireDamage(firedamage) {
	std::cout << "MOB CONSTR\n";
}

void Mob::showData() {
	Creature::showData();
	std::cout << "Fire Damage: " << _fireDamage << "\n";
}
