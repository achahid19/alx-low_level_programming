#include "main.h"

int _instance_sqrt_recursion(int n, int num);

/**
 * _sqrt_recursion - return the natural square root
 * of a number.
 * @n: input number.
 *
 * Return: -1 if n does not have a square root.
 */

int _sqrt_recursion(int n)
{
	/* base case */
	if (n < 0)
	{
		return (-1);
	}
	return (_instance_sqrt_recursion(n, 0));
}

/**
 * _instance_sqrt_recursion - stack the square root
 * @n: input number
 * @num: number to compute square root
 *
 * Return: num, otherwise -1.
 */

int _instance_sqrt_recursion(int n, int num)
{
	if (num * num == n)
		return (num);
	else if (num * num > n)
		return (-1);
	return (_instance_sqrt_recursion(n, num + 1));
}
