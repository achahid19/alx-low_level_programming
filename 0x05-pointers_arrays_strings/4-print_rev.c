#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 * Return: nothing
*/

void print_rev(char *s)
{
	int count = 0;
	int len = 0;

	while (*(s + count))
		count++;
	len = count - 1;
	while (len >= 0)
		_putchar(*(s + len--));
	_putchar('\n');
}
