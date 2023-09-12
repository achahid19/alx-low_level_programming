#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * @n: integer
 *
 * Return: absolute value
 */
int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
