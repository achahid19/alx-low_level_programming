#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: returns the index of the first element for which
 * the cmp function does not return 0, if no element matches
 * return -1 || size <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size <= 0)
		return (-1);
	for (count = 0; count < size; count++)
	{
		if ((*cmp)(array[count]) != 0)
			break;
		(*cmp)(array[count]);
	}
	if (count == size)
		return (-1);
	return (count);
}
