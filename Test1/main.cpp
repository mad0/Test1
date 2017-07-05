#include <iostream>
#include <string>

class Creature {
	protected:
		std::string _name;
		std::string _class;
		std::string _weapon;
		int _hp;
		int _damage;
		int _armor;
	public:
		Creature() { std::cout << "CREATURE CONSTR\n"; }
		virtual ~Creature() = 0 { std::cout << "CREATURE DESTR\n"; }
};

class Player : public Creature {
	public:
		Player() { std::cout << "PLAYER CONSTR\n"; }
		~Player() { std::cout << "PLAYER DETR\n"; }
};


int main() {
	Creature *wsk = new Player;
	delete wsk;
	return 0;
}