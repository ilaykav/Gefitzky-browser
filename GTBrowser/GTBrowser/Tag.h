#pragma once
#include <SFML/Graphics.hpp>
#include <vector>

class Tag
{
private:
	sf::RenderWindow window;
	std::vector<Tag> subTags;
	struct Location
	{
		int x;
		int y;
	};
	struct Location location;
	sf::Color backgroundColor;

	void setLocation(int x, int y);

public:
	
	Tag(int x, int y, sf::Color backgroundColor = sf::Color::Black);
	~Tag();
	void addSubTag(std::string text);
};

