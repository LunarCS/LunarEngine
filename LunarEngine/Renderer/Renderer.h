#pragma once
#include "Window/Window.h"
#include "Components/GameObject.h"
#include "Camera.h"
#include <ctime>
#include <vector>
#include "glm/glm.hpp"
#include "Camera.h"


//Main renderer for the current window context.
class Renderer
{
private:
	Window* _window;
	Camera* _currentCamera;
	GLFWwindow* _windowContextCached;
	clock_t _lastTime = clock();
	std::vector<GameObject*> _gameObjects;
	void calculateDeltaTime();
	bool renderWindow();
	void renderObjects();
	void updateObjects();
	void deleteObjects();
public:
	Renderer(Window* window, Camera* camera);
	bool clear();
	void addGameObject(GameObject* gameObject);
	void printFPS();
	~Renderer();
	float DeltaTime = 0.0f;
};

