#include "main.h"

/**
 * _putnbr - displays integer on stdout
 * @n: number
 *
 * Return: void
 */
void _putnbr(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n >= 0)
	{
		if (n >= 10)
		{
			_putnbr(n / 10);
			_putnbr(n % 10);
		}
		else if (n < 10)
			_putchar(n + 48);
	}
}

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	int flag;

	flag = 1;
	while (flag == 1 || flag == 0)
	{
		_putnbr(n);
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		switch (n >= 98)
		{
		case 1:
			n--;
			flag = 1;
			break;
		case 0:
			n++;
			flag = 0;
			break;
		}
		if (flag == 1 && n < 98)
			break;
		else if (flag == 0 && n > 98)
			break;
	}
	_putchar('\n');
}
