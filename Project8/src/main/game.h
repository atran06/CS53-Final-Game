#pragma once

#include <GLFW/glfw3.h>
#include <string>
#include <iostream>
#include "utilities/shapes.h"
#include "entities/player.h"

class Game {
	private:
		int windowWidth;
		int windowHeight;

		GLFWwindow* window;

		void setUpWindow(GLFWwindow* window);
		void runGameLoop();
		void render();
		void tick();

		static double mouseX, mouseY;
		static int leftClick, rightClick;

		bool canMousePress = true;

		void keyInput();
		void mousePress();
		static void mousePosition(GLFWwindow* window, double xpos, double ypos);

		enum STATE {intro, menu, game, end};
		STATE state;

		/* Game objects */
		Player p;

	public:
		Game(int winWidth = 500, int winHeight = 500);
		void startGame();

		GLFWwindow* getWindow();
		STATE getState();
		int getWindowWidth();
		int getWindowHeight();

		void setState(STATE state);
};
