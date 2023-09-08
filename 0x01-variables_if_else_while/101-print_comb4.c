#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int digit1;
	int digit2;
	int digit3;

	digit1 = 0;
	while (digit1 < 8)
	{
		digit2 = digit1 + 1;
		while (digit2 < 9)
		{
			digit3 = digit2 + 1;
			while (digit3 < 10)
			{
				putchar(digit1 + 48);
				putchar(digit2 + 48);
				putchar(digit3 + 48);
				if (digit1 == 7)
					break;
				putchar(',');
				putchar(' ');
				digit3++;
			}
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
