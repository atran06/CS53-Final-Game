#include "shapes.h"

void Shapes::drawRectangle(int x, int y, int width, int height) {
	glBegin(GL_QUADS);

	glVertex2i(x, y);
	glVertex2i(x + width, y);
	glVertex2i(x + width, y + height);
	glVertex2i(x, y + height);

	glEnd();
}