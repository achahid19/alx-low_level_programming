#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */
void times_table(void)
{
	int mult;
	int count;
	int result;

	mult = 0;
	while (mult <= 9)
	{
		count = 0;
		while (count <= 9)
		{
			result = mult * count;
			if (result < 10)
			{
				if (count > 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(result + 48);
			}
			else if (result >= 10)
			{
				if (count > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				_putchar(result / 10 + 48);
				_putchar(result % 10 + 48);
			}
			if (count == 9)
				_putchar('\n');
			count++;
		}
		mult++;
	}
}
