#include "main.h"

/**
 * _strlen_recursion - return the length of a string
 * @s: string to measure
 *
 * Return: Nothing.
 */

int _strlen_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
