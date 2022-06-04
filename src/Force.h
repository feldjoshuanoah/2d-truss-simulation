#pragma once

/**
 * Represents a force with an x- and y-component.
 */
class Force
{
	/**
	 * The magnitude in x-direction.
	 */
	float x;
	/**
	 * The magnitude in y-direction.
	 */
	float y;

public:
	/**
	 * Constructs a new Force with no magnitude.
	 */
	Force();

	/**
	 * Constructs a new Force with the given magnitudes.
	 * 
	 * @param x The magnitude in x-direction.
	 * @param y The magnitude in y-direction.
	 */
	Force(float x, float y);

	/**
	 * Gets the magnitude of this force in x-direction.
	 * 
	 * @returns The magnitude in x-direction.
	 */
	float getX();

	/**
	 * Sets the magnitude of this force in x-direction.
	 * 
	 * @param x The magnitude in x-direction.
	 */
	void setX(float x);

	/**
	 * Gets the magnitude of this force in y-direction.
	 * 
	 * @returns The magnitude in y-direction.
	 */
	float getY();

	/**
	 * Sets the magnitude of this force in y-direction.
	 * 
	 * @param x The magnitude in y-direction.
	 */
	void setY(float y);

	/**
	 * Gets the magnitude of the resultant force.
	 * 
	 * @returns The magnitude.
	 */
	float magnitude();

	/**
	 * Gets the angle of the resultant force.
	 * 
	 * @returns The angle.
	 */
	float direction();
};