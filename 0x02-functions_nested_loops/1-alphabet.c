#include "main.h"

/**
 * print_alphabet - Prints alphabet in lowercase on stdout
 *
 * Return: void
 */
void print_alphabet(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
		_putchar(alpha++);
	_putchar('\n');
}
