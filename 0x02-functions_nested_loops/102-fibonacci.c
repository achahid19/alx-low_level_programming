#include <stdio.h>
#include <unistd.h>

/**
 * ft_fibonacci - return fibonacci value
 * @index: fibo to calculate
 *
 * Return: void
 */
int ft_fibonacci(int index)
{
	unsigned long int index1 = 1;
	unsigned long int index2 = 2;
	int count = 0;

	while (count <= index - 1)
	{
		printf("%lu", index1);
		if (count <= index - 2)
		{
			index2 = index2 + index1;
			index1 = index2 - index1;
			puts(", ");
		}
		count++;
	}
	putchar('\n');
	return (0);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	printf("%i", ft_fibonacci(50));
	return (0);
}
