#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	char draw_square;
	int count;
	int size1;

	draw_square = '#';
	size1 = size;
	count = size1;
	if (size > 0)
	{
		while (count > 0)
		{
			size = size1;
			while (size > 0)
			{
				_putchar(draw_square);
				size--;
			}
			_putchar('\n');
			count--;
		}
	}
	else if (size <= 0)
		_putchar('\n');
}
