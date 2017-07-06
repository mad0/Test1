#include "Creature.h"


int main() {
	Creature *wsk;
	wsk = new Player("Kalach", "warrior",0,4,4,3);
	if (wsk->die()) {
		std::cout << "Mob umarl.\n";
		delete wsk;
	} else wsk->showData();
	Creature *wsk2;
	wsk2 = new Player("Kawka", "mag", 0, 43, 42,100);
	if (wsk->die()) {
		std::cout << "Mob umarl.\n";
		delete wsk2;
	} else wsk->showData();
	//std::cout << typeid(wsk).name();
	
	
	return 0;
}