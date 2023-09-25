#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to dest
 * @src: source
 * @dest: destination
 * @n: n bytes
 * Return: destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
