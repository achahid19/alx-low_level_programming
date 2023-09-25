#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string
 * @accept: set of bytes to locates in s
 * Return: pointer to the byte where was the match, otherwise NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int count_s = 0;
	int count_accept;

	while (s[count_s])
	{
		count_accept = 0;
		while (accept[count_accept])
		{
			if (s[count_s] == accept[count_accept])
				return (s + count_s);
			count_accept++;
		}
		count_s++;
	}
	return (NULL);
}
