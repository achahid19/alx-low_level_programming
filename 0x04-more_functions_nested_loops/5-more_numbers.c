#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	char num;
	int count;

	num = 0;
	count = 0;
	while (count <= 9)
	{
		num = 0;
		while (num <= 14)
		{
			if (num >= 10)
				_putchar(num / 10 + 48);
			_putchar(num % 10 + 48);
			num++;
		}
		count++;
		_putchar('\n');
	}
}
