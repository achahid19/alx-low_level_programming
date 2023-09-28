#include "main.h"

/**
 * _pow_recursion - return the value of x raised to
 * the power of y.
 * @x: input number
 * @y: power value
 *
 * Return: -1 if y is lower than zero
 */

int _pow_recursion(int x, int y)
{
	/* base case */
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
