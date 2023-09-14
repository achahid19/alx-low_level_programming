#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * and exclude 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	char digit;

	digit = '0';
	while (digit <= '9')
	{
		if (digit == '2' || digit == '4')
			digit++;
		_putchar(digit);
	}
	_putchar('\n');
}
