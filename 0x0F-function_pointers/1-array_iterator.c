#include "function_pointers.h"

/**
 * array_iterator - function that executes a fucntion given
 * as parameter on each element of an array
 * @array: array of integers
 * @size: size of the array
 * @action: pointer to the function we need to use
 * Return: void.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	for (count = 0; count < size; count++)
	{
		(*action)(array[count]);
	}
}
