#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	char low_alpha;
	char upper_alpha;

	low_alpha = 'a';
	while (low_alpha <= 'z')
	{
		putchar(low_alpha);
		low_alpha++;
	}
	upper_alpha = 'A';
	while (upper_alpha <= 'Z')
	{
		putchar(upper_alpha);
		upper_alpha++;
	}
	putchar('\n');
	return (0);
}
