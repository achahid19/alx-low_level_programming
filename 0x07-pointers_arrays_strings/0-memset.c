#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointed by s
 * with the constant b
 * @s: pointer to the buffer
 * @b: constant byte
 * @n: n bytes
 * Return: pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}
	return (s);
}
