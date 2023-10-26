#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @index: index of bit to be changed, starting from 0.
 * @n: pointer to to number
 * Return: 1 if worked, otherwise -1.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(*n) * 8 - 1)
		return (-1);
	if ((*n >> index & 1) == 1)
		return (1);
	else if ((*n >> index & 1) == 0)
		*n |= 1 << index;
	return (1);
}
