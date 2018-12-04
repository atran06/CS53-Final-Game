#pragma once

#include <string>
#include <GLFW/glfw3.h>
#include "utilities/shapes.h"
#include "entityIDs.h"

class Entity {
	protected: 
		std::string name;
		ENTITY_ID id;

		float x, y;
		float velX, velY;
		float width, height;

		Shapes shape;

	public:
		virtual void render() {}
		virtual void tick() {}

		/********************** Getters and Setters***********************/
		float getX() { return this->x; }
		float getY() { return this->y; }
		float getVelX() { return this->velX; }
		float getVelY() { return this->velY; }
		float getWidth() { return this->width; }
		float getHeight() { return this->height; }

		void setX(float x) { this->x = x; }
		void setY(float y) { this->y = y; }
		void setVelX(float velX) { this->velX = velX; }
		void setVelY(float velY) { this->velY = velY; }
		void setWidth(float width) { this->width = width; }
		void setHeight(float height) { this->height = height; }
		/*****************************************************************/
};
