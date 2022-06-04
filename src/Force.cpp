#include "Force.h"
#include <cmath>

Force::Force() {}

Force::Force(float x, float y): x{x}, y{y} {}

float Force::getX()
{
	return x;
}

void Force::setX(float x)
{
	this->x = x;
}

float Force::getY()
{
	return y;
}

void Force::setY(float y)
{
	this->y = y;
}

float Force::magnitude()
{
	return std::sqrt(std::pow(x, 2) + std::pow(y, 2));
}

float Force::direction()
{
	return std::atan2(y, x);
}
