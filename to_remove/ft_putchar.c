#include "hsh.h"

/**
 * ft_putchar - function that writes chars in stdout
 * @c: integer to write in ascii code
 * Return: void.
*/
void ft_putchar(int c)
{
	write(STDOUT_FILENO, &c, 1);
}
