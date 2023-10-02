#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * _putnbr - prints intgers
 * @num: number to print
 * Return: void
 */

void _putnbr(long int num)
{
	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num >= 0)
	{
		if (num < 10)
			_putchar(num + 48);
		else if (num >= 10)
		{
			_putnbr(num / 10);
			_putnbr(num % 10);
		}
	}
}

/**
 * main - Entry point
 * @ac: arguments count
 * @av: arguments vector
 * Return: Always 0.
*/

int main(int ac, char *av[])
{
	int num1, num2;
	long int sum;

	if (ac == 3)
	{
		num1 = atoi(av[1]);
		num2 = atoi(av[2]);
		sum = num1 * num2;
		_putnbr(sum);
	}
	else
	{
		write(1, "Error\n", 6);
		return (1);
	}
	_putchar('\n');
	return (EXIT_SUCCESS);
}
