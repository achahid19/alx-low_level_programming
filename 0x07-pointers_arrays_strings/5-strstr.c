#include "main.h"
#include <stddef.h>

/**
  * _strlen - measure length of string
  * @s: the string
  *
  * Return: length of the string
  */
int _strlen(char *s)
{
int len = 0;

while (s[len])
len++;
return (len);
}

/**
 * _strstr - locates a substring
 * @haystack: string where to search needle
 * @needle: substring to search
 * Return: pointer to the beginning of the located substring,
 * otherwise NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int needle_len = 0;
	int matches = 0;

	needle_len = _strlen(needle);
	while (*haystack && *needle)
	{
		if (*haystack != *needle)
		{
			needle -= matches;
			haystack -= (matches - 1);
			matches = 0;
			continue;
		}
		haystack++;
		needle++;
		matches++;
		if (matches == needle_len)
			break;
	}
	if (matches == needle_len)
		return (haystack - matches);
	return (NULL);
}
