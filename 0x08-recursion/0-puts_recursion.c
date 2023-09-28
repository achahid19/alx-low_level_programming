#include "main.h"

/**
 * _puts_recursion - print a string, followed by a new line.
 * @s: array to print
 *
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
