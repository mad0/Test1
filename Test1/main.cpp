#include <ctime>
#include "Creature.h"
#include "Battle.h"

int main() {
	srand(time(NULL));
	Creature *p;
	p = new Player("Kalach", "warrior",100,4,4,25,0);
	p->showData();
	Creature *m;
	m = new Player("Kawka", "mag", 80, 43, 42,19, 4);
	m->showData();
	Battle b(p, m);
	while ((!p->die()) && (!m->die())) {
		b.fight();
	}
		

	//std::cout << typeid(wsk).name();
	//delete wsk;

	return 0;
}