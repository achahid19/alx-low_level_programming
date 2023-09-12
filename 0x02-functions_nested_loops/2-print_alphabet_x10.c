#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabet x10 in lowercase on stdout
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int count;

	count = 0;
	while (count <= 9)
	{
		alpha = 'a';
		while (alpha <= 'z')
			_putchar(alpha++);
		count++;
		if (count == 10)
			break;
		_putchar('\n');
	}
}
