#include "main.h"
#include <stdlib.h>

/**
 * ft_strlen - returns the length of a string
 * @str: string
 * Return: str's length
*/
int ft_strlen(char *str)
{
	/* base case */
	if (*str == '\0')
		return (0);
	return (ft_strlen(str + 1) + 1);
}

/**
 * _strdup - allocate newly space memory
 * which contains a copy of a given string
 * @str: string to copy
 * Return: pointer to the duplicated string
*/

char *_strdup(char *str)
{
	char *ptr;
	int len, count;

	if (str == NULL)
	{
		return (NULL);
	}
	len = ft_strlen(str);
	ptr = malloc(sizeof(*ptr) * len + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (count = 0; count <= len; count++)
	{
		*(ptr + count) = *(str + count);
	}
	return (ptr);
}
