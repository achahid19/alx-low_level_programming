#include "main.h"
#include <stdlib.h>

/**
 * main - entry point
 * @ac: argument count
 * @av: argument vector
 * Return: Always 0.
*/

int main(int ac, char *av[])
{
	int count = 0;

	if (ac == 1)
	{
		for (count = 0; av[0][count]; count++)
			_putchar(av[0][count]);
		_putchar('\n');
	}
	return (EXIT_SUCCESS);
}
