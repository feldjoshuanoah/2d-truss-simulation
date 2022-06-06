#pragma once

#include "Node.h"
#include <vector>

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
	 * @param x The first connected node of this new truss.
	 * @param y The second connected node of this new truss.
	 */
	Truss(Node first, Node second);

	/**
	 * Gets the first node connected to this truss.
	 * 
	 * @returns The first connected node.
	 */
	Node getFirst();

	/**
	 * Sets the first node connected to this truss.
	 * 
	 * @param first The first connected node.
	 */
	void setFirst(Node first);

	/**
	 * Gets the second node connected to this truss.
	 * 
	 * @returns The second connected node.
	 */
	Node getSecond();

	/**
	 * Sets the second node connected to this truss.
	 * 
	 * @param second The second connected node.
	 */
	void setSecond(Node second);

	/**
	 * Gets the length of this truss (distance between the two nodes).
	 * 
	 * @returns The length.
	 */
	float length();

	/**
	 * Gets the element matrix of this truss.
	 * 
	 * @returns The element matrix.
	 */
	std::vector<std::vector<float>> getElementMatrix();
};
