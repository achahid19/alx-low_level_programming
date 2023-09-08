#include <stdio.h>
77;30603;0c
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char alpha;

	alpha = 'z';
	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}
	putchar('\n');
	return (0);
}
