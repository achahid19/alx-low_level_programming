#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of memory
 * @c: character to fill the allocated memory
 * Return: pointer to the array, otherwise NULL
*/

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int count = 0;

	str = malloc(sizeof(*str) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}
	while (count < size)
	{
		*(str + count) = c;
		count++;
	}
	*(str + count) = '\0';
	return (str);
}
