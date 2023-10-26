#include "main.h"

/**
 * print_binary - prints the binary represatation of a number.
 * @n: number to prints in binary format.
 * Return: void.
*/
void print_binary(unsigned long int n)
{
	int binary_size = sizeof(unsigned long int) * 8;
	int count, bit, flag_zero = 0;

	for (count = binary_size - 1; count >= 0; count--)
	{
		bit = (n >> count) & 1;
		if (bit)
		{
			_putchar('1');
			flag_zero = 1;
		}
		else if (flag_zero || count == 0)
		{
			_putchar('0');
		}
	}
}
