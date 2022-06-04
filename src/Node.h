#pragma once

#include "Force.h"
#include "Support.h"

/**
 * Represents a node at a 2-dimensional position.
 */
class Node
{
	/**
	 * The x-component of the position.
	 */
	float x;
	/**
	 * The y-component of the position.
	 */
	float y;
	/**
	 * The force acting on the node.
	 */
	Force force;
	/**
	 * The support holding the node.
	 */
	Support support;

public:
	/**
	 * Constructs a new Node with the given coordinates.
	 * 
	 * @param x The x-coordinate of this new node.
	 * @param y The y-coordinate of this new node.
	 */
	Node(float x, float y);

	/**
	 * Gets the x-coordinate of this node.
	 * 
	 * @returns The x-coordinate.
	 */
	float getX();

	/**
	 * Sets the x-coordinate of this node.
	 * 
	 * @param x The x-coordinate.
	 */
	void setX(float x);

	/**
	 * Gets the y-coordinate of this node.
	 * 
	 * @returns The y-coordinate.
	 */
	float getY();

	/**
	 * Sets the y-coordinate of this node.
	 * 
	 * @param y The y-coordinate.
	 */
	void setY(float y);

	/**
	 * Gets the force acting on this node.
	 * 
	 * @returns The force.
	 */
	Force getForce();

	/**
	 * Sets the force acting on this node.
	 * 
	 * @param force The force.
	 */
	void setForce(Force force);

	/**
	 * Gets the support holding this node.
	 * 
	 * @returns The support.
	 */
	Support getSupport();

	/**
	 * Sets the support holding this node.
	 * 
	 * @param support The support.
	 */
	void setSupport(Support support);

	/**
	 * Gets the distance between this node and another, defined as @f$d(A, B) = \sqrt{(x_A - x_B)^2 + (y_A - y_B)^2}@f$.
	 * 
	 * @param other The other node.
	 * @returns The distance.
	 */
	float distance(Node other);
};
