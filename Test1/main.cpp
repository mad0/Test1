#include <ctime>
#include "Creature.h"
#include "Battle.h"
#include <conio.h>

int main() {
	srand(time(NULL));
	Creature *p;
	p = new Player("Kalach", "Warrior",100,4,4,25,0);
	p->showData();
	Creature *m;
	m = new Player("Kawka", "normal", 80, 43, 42,19, 4);
	m->showData();
	_getch();
	Battle b(p, m);
	b.fight();
	p->addExp(10);
	p->showData();
	//std::cout << typeid(wsk).name();
	delete p;delete m;

	return 0;
}