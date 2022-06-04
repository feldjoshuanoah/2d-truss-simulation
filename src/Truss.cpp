#include "Truss.h"

Truss::Truss(Node first, Node second): first{first}, second{second} {}

Node Truss::getFirst()
{
	return first;
}

Node Truss::getSecond()
{
	return second;
}

float Truss::length()
{
	return first.distance(second);
}

std::vector<std::vector<float>> Truss::getElementMatrix()
{
	float l_s = (first.getX() - second.getX()) / length();
	float m_s = (first.getY() - second.getY()) / length(); 
	return {
		{l_s * l_s, l_s * m_s, -(l_s * l_s), -l_s * m_s},
		{l_s * m_s, m_s * m_s, -l_s * m_s, -(m_s * m_s)},
		{-(l_s * l_s), -l_s * m_s, l_s * l_s, l_s * m_s},
		{-l_s * m_s, -(m_s * m_s), l_s * m_s, m_s * m_s}
	};;
}
