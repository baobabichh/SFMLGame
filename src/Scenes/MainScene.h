#pragma once

#include "Scene.h"

class MainScene : public Scene
{
public:
	void update() override;
	void draw() override;

private:
	sf::RectangleShape m_shape{};

};