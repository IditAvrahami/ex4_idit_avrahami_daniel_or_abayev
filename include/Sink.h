#pragma once
#include "Object.h"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Texture.hpp>

class Sink : public Object
{
public:
	Sink(int x, int i) :Object(x,i) {};
	~Sink ()= default;
//	virtual void printObject(sf::RenderWindow& window)const {};

private:
	//sf::Sprite m_sinkPng;
};
