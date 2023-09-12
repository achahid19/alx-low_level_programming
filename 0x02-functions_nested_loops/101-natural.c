#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	int sum;

	sum = 0;
	count = 1023;
	while (count >= 3)
	{
		if (count % 3 == 0 || count % 5 == 0)
			sum += count--;
		else
			count--;
	}
	printf("%i\n", sum);
	return (0);
}
