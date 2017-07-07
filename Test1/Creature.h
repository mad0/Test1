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
		int _damage;

	public:
		Creature(std::string, std::string, int, int, int, int);
		virtual ~Creature() = 0;
		int attack(Creature*);
		virtual bool die();
		virtual void showData();
		virtual void addExp(int) {};
		std::string getName() { return _name; }
		std::string getClass() { return _class; }
		int getHp() { return _hp; }
		int getDamage() { return _damage; }
		void setHp(int);
		int getArmor() { return _armor; }
		int getLevel() { return _level; }
};

class Player : public Creature {
	private:
		int _bagSize;
		int _exp;
	public:
		Player(std::string name, std::string classa, int hp, int armor, int level, int damage, int bagSize);
		~Player() { std::cout << "PLAYER DETR\n"; }
		void showData();
		void addExp(int);
};

class Mob : public Creature {
	public:
		Mob(std::string name, std::string classa, int hp, int armor, int level, int damage);
		~Mob() { std::cout << "MOB DETR\n"; }
		void showData();
};