#include "Truss.h"
#include <cmath>

Truss::Truss(Node first, Node second): first{first}, second{second} {}

float Truss::length()
{
	return first.distance(second);
}
