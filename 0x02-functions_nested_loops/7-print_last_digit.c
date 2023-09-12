#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: number
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	long int num = n;
	char last_digit;

	if (num < 0)
		num *= -1;
	last_digit = num % 10;
	_putchar(last_digit + 48);
	return (last_digit);
}
