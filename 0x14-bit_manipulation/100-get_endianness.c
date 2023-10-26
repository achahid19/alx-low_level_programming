#include "main.h"

/**
 * get_endianness - function that checks for byte order
 * Return: 0 if big endian, 1 if little endian.
*/
int get_endianness(void)
{
	int num = 1;
	char *bit;

	bit = (char *)&num;
	return (*bit);
}
