#include "main.h"

/**
 * print_diagonal - draws a diagonal line on stdout
 * @n: numbers of times '\' should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	char draw_diagonal;
	int count;
	int add;

	draw_diagonal = '\\';
	count = 0;
	add = 0;
	if (n > 0)
	{
		while (n > 0)
		{
			while (count > 0)
			{
				_putchar(' ');
				count--;
			}
			_putchar(draw_diagonal);
			_putchar('\n');
			add++;
			count += add;
			n--;
		}
	}
	else if (n <= 0)
		_putchar('\n');
}
