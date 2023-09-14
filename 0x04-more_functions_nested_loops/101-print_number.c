#include "main.h"

/**
 * print_number - prints an integer
 * @n: number to print
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
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
