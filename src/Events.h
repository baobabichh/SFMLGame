#pragma once
#include <vector>
#include "SFML/Graphics.hpp"

class Events
{
public:
	void pool(sf::RenderWindow& window);
	void clear();

	std::vector<sf::Event>::const_iterator cbegin()const;
	std::vector<sf::Event>::const_iterator cend()const;
	std::vector<sf::Event>::iterator begin();
	std::vector<sf::Event>::iterator end();


private:
	std::vector<sf::Event> m_events{};
};
