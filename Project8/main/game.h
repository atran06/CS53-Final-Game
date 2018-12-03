#pragma once

#include <GLFW/glfw3.h>
#include <string>

class Game {
	private:
		int windowWidth;
		int windowHeight;

		GLFWwindow* window;

		void setUpWindow(GLFWwindow* window);
		void runGameLoop();
		void render();
		void tick();

	public:
		Game(int winWidth = 500, int winHeight = 500);
		void startGame();

		GLFWwindow* getWindow();
		int getWindowWidth();
		int getWindowHeight();
};
