#include "main.h"

/**
 * factorial - return the factorial of a given number.
 * @n: input number
 *
 * Return: return 0 if n lower than 0.
 */

int factorial(int n)
{
	/* case base */
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
