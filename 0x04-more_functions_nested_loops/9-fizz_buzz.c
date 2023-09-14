#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)
{
	int num;

	num = 1;
	while (num <= 100)
	{
		if (num % 3 == 0)
			printf("Fizz");
		if (num % 5 == 0)
			printf("Buzz");
		else if (num % 3 != 0)
			printf("%i", num);
		printf(" ");
		num++;
	}
	printf("\n");
	return (0);
}
