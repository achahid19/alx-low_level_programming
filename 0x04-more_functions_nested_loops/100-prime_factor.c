#include <stdio.h>

/**
 * main - Entry point
 * Return: void
 */

int main(void)
{
	long int count = 612852475143;
	long int div = 2;

	while (div <= count)
	{
		if (!(count % div != 0))
			count /= div--;
		div++;
	}
	printf("%lu\n", div);
	return (0);
}
