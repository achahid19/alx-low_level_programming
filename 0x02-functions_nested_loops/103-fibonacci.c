#include <stdio.h>
#include <stdlib.h>

/**
 * ft_fibonacci - return fibonacci value
 * @index: fibo to calculate
 *
 * Return: void
 */
int *ft_fibonacci(int index)
{
	unsigned long int index1 = 1;
	unsigned long int index2 = 2;
	int *arr = malloc(index * sizeof(int));
	int count = 0;

	while (count <= index - 1)
	{
		if (index1 > 4000000)
			break;
		arr[count] = index1;
		if (count <= index - 2)
		{
			index2 = index2 + index1;
			index1 = index2 - index1;
		}
		count++;
	}
	putchar('\n');
	return (arr);
}

/**
 * ft_sum_even_num - finds even numbers and sum them
 * @arr: pointer to an array of integers
 *
 * Return: sum of even numbers
 */

int ft_sum_even_num(int *arr)
{
	int count;
	int sum;

	count = 0;
	sum = 0;
	while (arr[count] != 0)
	{
		if (arr[count] % 2 == 0)
			sum += arr[count++];
		else
			count++;
	}
	return (sum);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int *ptr;
	int sum;

	ptr = ft_fibonacci(89);
	sum = ft_sum_even_num(ptr);
	printf("%i\n", sum);
	return (0);
}
