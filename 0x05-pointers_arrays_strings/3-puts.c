#include "main.h"

/**
 * _puts - prints a string followed by a new line to stdout
 * @str: string to print
 * Return: void
*/

void _puts(char *str)
{
	int count = 0;

	while (str[count])
		_putchar(str[count++]);
	_putchar('\n');
}
