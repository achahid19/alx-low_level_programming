#include "main.h"

/**
 * _putnbr - displays number on stdout
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
	else if (n >= 0)
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
 * ft_punctuation - add comma and spaces needed on the table
 * @result: add punctuation depending on the result
 *
 * Return: void
 */
void ft_punctuation(int result)
{
	switch (result < 10)
	{
	case 1:
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		break;
	case 0:
		switch (result >= 10 && result < 100)
		{
		case 1:
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			break;
		case 0:
			_putchar(',');
			_putchar(' ');
			break;
		}
	}
}

/**
 * print_times_table - prints the 9 times table, starting with 0
 * @n: multiplication table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int mult;
	int count;
	int result;

	mult = 0;
	if (n <= 15 && n >= 0)
	{
		while (mult <= n)
		{
			count = 0;
			while (count <= n)
			{
				result = mult * count;
				if (count > 0)
					ft_punctuation(result);
				_putnbr(result);
				if (count == n)
					_putchar('\n');
				count++;
			}
			mult++;
		}
	}
}
