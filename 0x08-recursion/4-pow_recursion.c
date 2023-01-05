#include "main.h"

/**
 * _pow_recursion - a funtion that returns the value
 * of x raised to the power of y
 * @x: the input for the value of x
 * @y: the input for y the power
 *
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	int z;

	if (y < 0)
	{
		return (-1);
	}
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));

	else
	{
		return (1);
	}
}
