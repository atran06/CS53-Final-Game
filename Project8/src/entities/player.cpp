#include "player.h"

Player::Player(int x, int y) {
	this->x = x;
	this->y = y;

	this->velX = 0;
	this->velY = 0;

	this->width = 100;
	this->height = 100;
}

void Player::render() {
	shape.drawRectangle(x, y, width, height);
}

void Player::tick() {
	x += velX;
	y += velY;
}