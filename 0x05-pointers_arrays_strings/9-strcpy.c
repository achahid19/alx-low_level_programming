#include "main.h"

/**
 * _strcpy - copies a str form src to dest including '\0'
 * @dest: destination
 * @src: source
 * Return: destination
*/

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (dest);
}
