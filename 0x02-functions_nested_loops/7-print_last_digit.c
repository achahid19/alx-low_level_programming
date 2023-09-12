#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	char last_digit;

	if (n < 0)
		n *= -1;
	last_digit = n % 10;
	_putchar(last_digit + 48);
	return (last_digit);
}
