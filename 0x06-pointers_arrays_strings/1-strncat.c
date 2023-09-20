#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: n bytes from sourc (src)
 * Return: destination
*/

char *_strncat(char *dest, char *src, int n)
{
	unsigned int len_dest = 0;
	int count = 0;

	while (dest[len_dest])
	{
		len_dest++;
	}
	while (count < n && src[count])
	{
		dest[len_dest + count] = src[count];
		count++;
	}
	dest[len_dest + count] = '\0';
	return (dest);
}
