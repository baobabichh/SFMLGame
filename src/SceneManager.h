#pragma once
#include "Scene.h"
#include <memory>

class SceneManager
{
public:
	void changeScene(std::unique_ptr<Scene>&& new_scene);
	const std::unique_ptr<Scene>& getCurrentScene()const;
	std::unique_ptr<Scene>& getCurrentScene();

	void draw();
	void update();

private:
	std::unique_ptr<Scene> m_current_scene{};
	std::unique_ptr<Scene> m_next_scene{};
	bool should_change = false;
};
