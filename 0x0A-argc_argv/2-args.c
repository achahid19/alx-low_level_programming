#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @ac: arguments count
 * @av: argutments vector
 * Return: Always 0.
*/

int main(int ac, char *av[])
{
	int count_row, count_column;

	for (count_row = 0; count_row < ac; count_row++)
	{
		for (count_column = 0; av[count_row][count_column]; count_column++)
			_putchar(av[count_row][count_column]);
		if (count_row == ac - 1)
			break;
		_putchar('\n');
	}
	return (EXIT_SUCCESS);
}
