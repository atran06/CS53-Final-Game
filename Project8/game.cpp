#include "game.h"

Game::Game(int winWidth, int winHeight) {
	this->windowWidth = winWidth;
	this->windowHeight = winHeight;
}

/*************************** OpenGL Utilities *************************************/

void framebufferSizeCallback(GLFWwindow* window, int width, int height) {
	glViewport(0, 0, width, height);
}

/**********************************************************************************/

/************************* Getters and Setters ************************************/

GLFWwindow* Game::getWindow() { return this->window; }

int Game::getWindowWidth() { return this->windowWidth; }
int Game::getWindowHeight() { return this->windowHeight; }

/**********************************************************************************/

void Game::runGameLoop() {
	while (!glfwWindowShouldClose(window)) {
		glClearColor(1.f, 1.f, 1.f, 1.f);
		glClear(GL_COLOR_BUFFER_BIT);

		glMatrixMode(GL_MODELVIEW);

		glfwSwapBuffers(this->window);
		glfwPollEvents();
	}

	glfwTerminate();
}

void Game::setUpWindow(GLFWwindow* window) {
	glfwMakeContextCurrent(window);
	glViewport(0, 0, this->windowWidth, this->windowHeight);
	glfwSetFramebufferSizeCallback(window, framebufferSizeCallback); //notifies when window is resized
	glOrtho(0, this->windowWidth, this->windowHeight, 0, -1, 1); //uses pixel coordinates instead of polar coordinates

	const GLFWvidmode* vidMode = glfwGetVideoMode(glfwGetPrimaryMonitor()); //creates a videomode with primary monitor
	glfwSetWindowPos(window, vidMode->width / 2 - (this->windowWidth / 2), vidMode->height / 2 - (this->windowHeight / 2)); //sets the window to be in the middle of the screen
}

void Game::startGame() {
	glfwInit();

	window = glfwCreateWindow(this->windowWidth, this->windowHeight, "", NULL, NULL);
	if (!window) {
		glfwTerminate();
		return;
	}
	setUpWindow(window);

	runGameLoop();
}