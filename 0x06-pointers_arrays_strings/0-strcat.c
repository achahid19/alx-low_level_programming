#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: destination
*/

char *_strcat(char *dest, char *src)
{
	int len_dest = 0;
	int count = 0;

	while (*(dest + len_dest))
		len_dest++;
	while (*(src + count))
	{
		dest[len_dest] = src[count];
		count++;
		len_dest++;
	}
	return (dest);
}
