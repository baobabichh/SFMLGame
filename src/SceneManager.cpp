#include "SceneManager.h"


void SceneManager::changeScene(std::unique_ptr<Scene>&& new_scene)
{
	m_next_scene = std::move(new_scene);
	should_change = true;
}

const std::unique_ptr<Scene>& SceneManager::getCurrentScene() const
{
	return m_current_scene;
}

std::unique_ptr<Scene>& SceneManager::getCurrentScene()
{
	return m_current_scene;
}

void SceneManager::draw()
{
	if (m_current_scene)
	{
		m_current_scene->draw();
	}
}

void SceneManager::update()
{
	if (should_change)
	{
		m_current_scene = std::move(m_next_scene);
		should_change = false;
	}
	if (m_current_scene)
	{
		m_current_scene->update();
	}
}
