#include "Support.h"

Support::Support() {}

Support::Support(bool x, bool y): x{x}, y{y} {}

bool Support::isX()
{
	return x;
}

void Support::setX(bool x)
{
	this->x = x;
}

bool Support::isY()
{
	return y;
}

void Support::setY(bool y)
{
	this->y = y;
}
