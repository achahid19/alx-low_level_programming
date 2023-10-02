#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * _isdigit - check the string if contains only digits
 * @str: string to check
 * Return: 0 if str contains none digits, otherwise 1.
 */
int _isdigit(char *str)
{
	int count;

	for (count = 0; str[count]; count++)
	{
		if (str[count] >= '0' && str[count] <= '9')
			continue;
		else
			return (0);
	}
	return (1);
}

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
	int count;
	long int sum = 0;

	if (ac > 1)
	{
		for (count = 1; count < ac; count++)
		{
			if (_isdigit(av[count]))
				sum += atoi(av[count]);
			else
			{
				write(1, "Error\n", 6);
				return (1);
			}
		}
		_putnbr(sum);
		_putchar('\n');
	}
	else
		write(1, "0\n", 2);
	return (EXIT_SUCCESS);
}
