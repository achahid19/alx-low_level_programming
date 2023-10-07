#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory of an array
 * @nmemb: number of elements of the array
 * @size: size in bytes of each element
 * Return: pointer to the allocated memory, otherwise NULL
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	str = malloc(size * nmemb);
	if (str == NULL)
		return (NULL);
	/* set the memory to 0 */
	memset(str, 0, nmemb * size);
	return (str);
}
