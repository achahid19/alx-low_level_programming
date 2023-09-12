#include "main.h"

/**
 * print_sign - prints the sign of a number on stdout
 * @n: the number
 *
 * Return: 1 if n > 0, 0 if n == 0, -1 if n < 0
 */
int print_sign(int n)
{
	switch (n > 0)
	{
	case 1:
		_putchar('+');
		return (1);
	case 0:
		switch (n < 0)
		{
		case 1:
			_putchar('-');
			return (-1);
		case 0:
			_putchar('0');
			return (0);
		}
	}
	return (2);
}
