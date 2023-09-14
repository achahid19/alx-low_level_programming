#include "main.h"

/**
 * print_line - draws a straight line in stdout
 * @n: number of times '_' should be printed
 * Return: void
 */

void print_line(int n)
{
	char draw_line;

	draw_line = '_';
	while (n > 0)
	{
		_putchar(draw_line);
		n--;
	}
	_putchar('\n');
}
