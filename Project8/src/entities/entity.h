#pragma once

#include <string>
#include <GLFW/glfw3.h>
#include "utilities/shapes.h"

class Entity {
	protected: 
		std::string name;

		int x, y;
		int velX, velY;
		int width, height;

		Shapes shape;

	public:
		virtual void render() {}
		virtual void tick() {}

		/********************** Getters and Setters***********************/
		int getX() { return this->x; }
		int getY() { return this->y; }
		int getVelX() { return this->velX; }
		int getVelY() { return this->velY; }
		int getWidth() { return this->width; }
		int getHeight() { return this->height; }

		void setX(int x) { this->x = x; }
		void setY(int y) { this->y = y; }
		void setVelX(int velX) { this->velX = velX; }
		void setVelY(int velY) { this->velY = velY; }
		void setWidth(int width) { this->width = width; }
		void setHeight(int height) { this->height = height; }
		/*****************************************************************/
};
