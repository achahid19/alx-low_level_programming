#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @ac: arguments count
 * @av: arguments vector
 * Return: Always 0.
*/

int main(int ac, char **av)
{
	(void)av;
	ac--;
	_putchar(ac + 48);
	_putchar('\n');
	return (EXIT_SUCCESS);
}
