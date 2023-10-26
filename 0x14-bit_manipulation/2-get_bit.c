#include "main.h"

/**
 * get_bit - function that returns a value of a bit at a given index
 * @n: number
 * @index: index starting form 0.
 * Return: index or -1 if an error occured.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
		return (-1);
	return (n >> index & 1);
}
