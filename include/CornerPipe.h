#pragma once
#include "RotationObject.h"

class CornerPipe : public RotationObject
{
public:
	CornerPipe(int x) : RotationObject(x) {};
	~CornerPipe() = default;
//	virtual void rotation(const Direction& direction);
	virtual void printObject(sf::RenderWindow& window)const {};

private:
	
};