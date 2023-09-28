#include "main.h"

/**
 * is_prime_number - check for prime numbers
 * @n: number to check
 *
 * Return: 1 if input is prime number, otherwise 0.
 */

int is_prime_number(int n)
{
	if (n > 1)
	{
		if (n / 2 * n / 2 != n)
			return (1);
		else if (n / 2 * n / 2 == n)
			return (0);
	}
	return (0);
}
