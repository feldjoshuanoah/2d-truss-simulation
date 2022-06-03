#include "Node.h"
#include <cmath>

Node::Node(float x, float y): x{x}, y{y} {}

float Node::getX()
{
	return x;
}

void Node::setX(float x)
{
	this->x = x;
}

float Node::getY()
{
	return y;
}

void Node::setY(float y)
{
	this->y = y;
}

void Node::distance(Node o)
{
	return std::sqrt(std::pow(x - o.getX(), 2) + std::pow(y - o.getY(), 2));
}
