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

	digit1 = 0;
	while (digit1 < 9)
	{
		digit2 = digit1 + 1;
		while (digit2 < 10)
		{
			putchar(digit1 + 48);
			putchar(digit2 + 48);
			if (digit1 == 8)
				break;
			putchar(',');
			putchar(' ');
			digit2++;
		}
		digit1++;
	}
	putchar('\n');
	return (0);
}
