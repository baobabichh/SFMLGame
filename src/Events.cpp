#include "Events.h"
void Events::pool(sf::RenderWindow& window)
{
	clear();
	sf::Event event{};
	while (window.pollEvent(event))
	{
		m_events.push_back(event);
	}
}

void Events::clear()
{
	m_events.clear();
}

std::vector<sf::Event>::const_iterator Events::cbegin() const
{
	return m_events.cbegin();
}

std::vector<sf::Event>::const_iterator Events::cend() const
{
	return m_events.cend();
}

std::vector<sf::Event>::iterator Events::begin()
{
	return std::begin(m_events);
}

std::vector<sf::Event>::iterator Events::end()
{
	return std::end(m_events);
}
