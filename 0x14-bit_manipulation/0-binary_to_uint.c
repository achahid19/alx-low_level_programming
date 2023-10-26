#include "main.h"

/**
 * ft_pow - computes base power exponent
 * @base: integer
 * @expo: exponent
 * Return: base power exponent.
*/
unsigned int ft_pow(int base, int expo)
{
	unsigned int result = base;
	int count;

	if (expo == 0)
		return (1);
	for (count = 1; count < expo; count++)
	{
		result *= base;
	}
	return (result);
}
/**
 * binary_to_uint - function that converts a binary number to unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * Return: converted number, otherwise 0
*/
unsigned int binary_to_uint(const char *b)
{
	int count_base = 0, len;
	unsigned int decimal = 0;

	if (b == NULL)
		return (0);
	len = strlen(b) - 1;
	for (len = strlen(b) - 1; len >= 0; len--)
	{
		switch (b[len])
		{
			case '1':
					decimal += ft_pow(2, count_base++);
					break;
			case '0':
					count_base++;
					continue;
			default:
					return (0);
		}
	}
	return (decimal);
}
