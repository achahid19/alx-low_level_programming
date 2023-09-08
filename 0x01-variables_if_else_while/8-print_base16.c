#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char digit;
	char alpha;

	digit = '0';
	while (digit <= '9')
	{
		putchar(digit);
		digit++;
	}
	alpha = 'a';
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
