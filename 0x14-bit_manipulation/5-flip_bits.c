#include "main.h"

/**
 * flip_bits - returns the number of bits to be flipped to get
 * form one number to another one.
 * @n: number
 * @m: number to flip to.
 * Return: number of bits needed
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	unsigned long int d = n ^ m;

	for (count = 0; d != 0; count++)
		d &= d - 1;
	return (count);
}
