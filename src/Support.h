#pragma once

/**
 * Represents a support in a 2-dimensional plane.
 */
class Support
{
	/**
	 * Whether there is support in x-direction.
	 */
	bool x;
	/**
	 * Whether there is support in y-direction.
	 */
	bool y;

public:
	/**
	 * Constructs a new Support with both directions being unsupported.
	 */
	Support();

	/**
	 * Constructs a new Support with the given support indicator booleans.
	 * 
	 * @param x Whether there is support in x-direction for this new support.
	 * @param y Whether there is support in y-direction for this new support.
	 */
	Support(bool x, bool y);

	/**
	 * Gets whether there is support in x-direction.
	 * 
	 * @returns true if there is support in x-direction.
	 */
	bool isX();

	/**
	 * Sets whether there is support in x-direction.
	 * 
	 * @param x Whether there is support in x-direction.
	 */
	void setX(bool x);

	/**
	 * Gets whether there is support in y-direction.
	 * 
	 * @returns true if there is support in y-direction.
	 */
	bool isY();

	/**
	 * Sets whether there is support in x-direction.
	 * 
	 * @param x Whether there is support in y-direction.
	 */
	void setY(bool y);
};