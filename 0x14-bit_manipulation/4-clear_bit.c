#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @index: index of bit to be changed, starting at 0
 * @n: pointer to number
 * Return: 1 if worked, otherwise 0.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int u;

	if (index > sizeof(*n) * 8 - 1)
		return (-1);
	if ((*n >> index & 1) == 0)
		return (1);
	else if ((*n >> index & 1) == 1)
	{
		u = ~(1 << index);
		*n &= u; 
	}
	return (1);
}
