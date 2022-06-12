#include "Node.h"
#include <cmath>

Node::Node(unsigned int id, float x, float y): id{id}, x{x}, y{y} {}

unsigned int Node::getId()
{
	return id;
}

void Node::setId(unsigned int id)
{
	this->id = id;
}

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

Force Node::getForce()
{
	return force;
}

void Node::setForce(Force force)
{
	this->force = force;
}

Support Node::getSupport()
{
	return support;
}

void Node::setSupport(Support support)
{
	this->support = support;
}

float Node::distance(Node other)
{
	return std::sqrt(std::pow(x - other.getX(), 2) + std::pow(y - other.getY(), 2));
}
