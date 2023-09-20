#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: pointer to the array of integers
 * @n: number of elements in the array
 * Return: void
*/

void reverse_array(int *a, int n)
{
	int count = 0;
	int temp;
	unsigned int last_element = n - 1;

	while (count <= n / 2)
	{
		temp = a[last_element];
		a[last_element] = a[count];
		a[count] = temp;
		count++;
		last_element--;
	}
}
