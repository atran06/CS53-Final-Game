#include "player.h"

Player::Player(float x, float y) {
	this->x = x;
	this->y = y;

	this->velX = 0;
	this->velY = 0;

	this->width = 100;
	this->height = 100;

	this->id = player;
	this->name = "";
}

void Player::render() {
	shape.drawRectangle(x, y, width, height);
}

void Player::tick() {
	x += velX;
	y += velY;
}