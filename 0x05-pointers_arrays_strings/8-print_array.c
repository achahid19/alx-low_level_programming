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
		else
		{
			putchar(',');
			putchar(' ');
		}
		count++;
	}
	printf("\n");
}
/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
