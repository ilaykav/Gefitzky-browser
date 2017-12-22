#pragma once
#include "Tag.h"

class HTMLText : public Tag
{

private:
	std::string text;
	int size;
	sf::Color textColor;

public:
	HTMLText();
	~HTMLText();
};

