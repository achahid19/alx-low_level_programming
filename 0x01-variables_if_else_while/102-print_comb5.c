#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int num1;
	int num2;

	num1 = 0;
	while (num1 < 99)
	{
		num2 = num1 + 1;
		while (num2 < 100)
		{
			putchar(num1 / 10 + 48);
			putchar(num1 % 10 + 48);
			putchar(' ');
			putchar(num2 / 10 + 48);
			putchar(num2 % 10 + 48);
			if (num1 == 98)
				break;
			putchar(',');
			putchar(' ');
			num2++;
		}
		num1++;
	}
	putchar('\n');
	return (0);
}
