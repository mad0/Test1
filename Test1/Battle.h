#pragma once
#include "Creature.h"

class Battle {
	private:
		Creature* player;
		Creature* target;
	public:
		Battle(Creature*, Creature*);
		~Battle();
		void fight();
		void stats();
};
