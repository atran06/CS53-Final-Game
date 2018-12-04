#pragma once

#include "entity.h"

class Player : public Entity {
	public:
		Player(int x = 0, int y = 0);
		void render();
		void tick();

};