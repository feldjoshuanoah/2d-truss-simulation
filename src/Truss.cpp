#include "Truss.h"

Truss::Truss(Node first, Node second): first{first}, second{second} {}

float Truss::length()
{
	return first.distance(second);
}
