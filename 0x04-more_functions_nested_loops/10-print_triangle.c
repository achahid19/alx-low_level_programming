#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	char draw_triangle = '#';
	int space = size - 1;
	int size1 = size;
	int down = 0;

	if (size > 0)
	{
		while (size > 0)
		{
			while (space > 0)
			{
				_putchar(' ');
				space--;
			}
			down = size1 - size + 1;
			space = size1 - 1 - down;
			while (down > 0)
			{
				_putchar(draw_triangle);
				down--;
			}
			size--;
			_putchar('\n');
		}
	}
	else if (size <= 0)
		_putchar('\n');
}
