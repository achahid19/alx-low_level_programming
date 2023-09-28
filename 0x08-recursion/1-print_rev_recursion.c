#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: array to print
 *
 * Return: Nothing.
 */

void _print_rev_recursion(char *s)
{
	/* base case */
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
