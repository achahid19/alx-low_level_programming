#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of ints
 * @a: pointer to integer
 * @n: number of elements of the array to be printed
 * Return: void
*/

void print_array(int *a, int n)
{
	int count = 0;

	while (count < n)
	{
		printf("%d", *(a + count));
		if (count == n - 1)
			break;
		putchar(',');
		putchar(' ');
		count++;
	}
	printf("\n");
}
