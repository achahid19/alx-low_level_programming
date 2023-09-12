#include <unistd.h>

/**
 * _putchar - Displays character on stdout
 * @c: character to display
 *
 * Return: void
 */
void _putchar(char c)
{
	write(1, &c, 1);
}
