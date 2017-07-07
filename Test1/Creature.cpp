#include "Creature.h"
#include <iostream>

Creature::Creature(std::string name, std::string classa, int hp, int armor, int level, int damage) :_name(name), _class(classa), _hp(hp), _armor(armor), _level(level), _damage(damage) {
	std::cout << "CREATURE CONSTR\n";
}

Creature::~Creature(){
	std::cout << "CREATURE DESTR\n";
}

void Creature::showData() {
	std::cout << "Name: " << _name << "\n";
	std::cout << "Level: " << _level << "\n";
	std::cout << "Damage: " << _damage << "\n";
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

void Creature::setHp(int damage) {
	_hp -= damage;
}

int Creature::attack(Creature* target) {
	int dmg = 0;
	int hp = target->getHp();
	//7 (-3,-2,-1,0,1,2,3) liczb -3 do 3
	float rnd = (rand() % 7) - 3;
	//std::cout << _hp << " random\n";
	dmg = _damage + (rnd);
	if (dmg >hp) {
		target->setHp(hp);
		return dmg;
	}
	else {
		target->setHp(dmg);
		return dmg;
	}
}

//PLAYER
Player::Player(std::string name, std::string classa, int hp, int armor, int level, int damage, int bagSize) : Creature(name, classa, hp, armor, level, damage), _bagSize(bagSize) {
	_exp = 0;
	std::cout << "PLAYER CONSTR\n";
}

void Player::showData() {
	Creature::showData();
	std::cout << "Bagsize: " << _bagSize << "\n";
	std::cout << "Exp: " << _exp << "\n";
}

void Player::addExp(int exp) {
	_exp += exp;
}


//MOB
Mob::Mob(std::string name, std::string classa, int hp, int armor, int level, int damage) : Creature(name, classa, hp, armor, level, damage) {
	std::cout << "MOB CONSTR\n";
}

void Mob::showData() {
	Creature::showData();
}
