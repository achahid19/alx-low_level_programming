#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum of two diagonals of a square matrix integers
 * @a: pointer to integers
 * @size: size of square
 * Return: void
*/

void print_diagsums(int *a, int size)
{
	int sum_left_diag, sum_right_diag = 0;
	int count = 0;

	sum_left_diag = a[0];
	while (count < size * size)
	{
		count += size + 1;
		if (count >= size * size)
			break;
		sum_left_diag += a[count];
	}
	count = 0;
	while (count < size * size)
	{
		count += size - 1;
		if (count > (size * size - size))
			break;
		sum_right_diag += a[count];
	}
	printf("%d, %d\n", sum_left_diag, sum_right_diag);
}
