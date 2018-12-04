#pragma once

#include "entity.h"

class Player : public Entity {
	private:
		bool canMove = true;

	public:
		Player(float x = 0, float y = 0);
		void render();
		void tick();

		bool getCanMove() { return this->canMove; }
		void setCanMove(bool canMove) { this->canMove = canMove; }

};