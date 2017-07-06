#pragma once
#include <string>
#include <iostream>

class Creature {
protected:
	std::string _name;
	std::string _class;
	int _hp;
	int _armor;
	int _level;
public:
	Creature(std::string, std::string, int, int, int);
	virtual ~Creature() = 0;
	virtual bool die();
	virtual void showData();
	std::string getName() { return _name; }
	std::string getClass() { return _class; }
	int getHp() { return _hp; }
	int getArmor() { return _armor; }
	int getLevel() { return _level; }

};

class Player : public Creature {
private:
	int _bagSize;
public:
	Player(std::string name, std::string classa, int hp, int armor, int level, int bagSize);
	~Player() { std::cout << "PLAYER DETR\n"; }
	void showData();
};

class Mob : public Creature {
private:
	int _fireDamage;
public:
	Mob(std::string name, std::string classa, int hp, int armor, int level, int firedamage);
	~Mob() { std::cout << "MOB DETR\n"; }
	void showData();
};