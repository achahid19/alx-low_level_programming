#include <unistd.h>
#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 * Return: void
 */

void _putchar(char c)
{
	write(1, &c, 1);
}

void print_number(int n)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			write(1, "-2147483648", 11);
			return;
		}
		_putchar('-');
		n *= -1;
	}
	if (n >= 0)
	{
		if (n < 10)
			_putchar(n + 48);
		else if (n >= 10)
		{
			print_number(n / 10);
			print_number(n % 10);
		}
	}
}
