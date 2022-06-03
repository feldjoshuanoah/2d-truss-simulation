#pragma once

#include "Node.h"
#include <string>

/**
 * Represents a truss connecting two nodes in a straight line.
 */
class Truss
{
	/**
	 * The first node connected to the truss.
	 */
	Node first;
	/**
	 * The second node connected to the truss.
	 */
	Node second;

public:
	/**
	 * Constructs a new Truss with the given Nodes.
	 * 
	 * @param x The first connected node.
	 * @param y The second connected node.
	 */
	Truss(Node first, Node second);

	/**
	 * Gets the length of this truss (distance between the two nodes).
	 * 
	 * @returns The length.
	 */
	float length();
};
