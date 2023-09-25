#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string where to search needle
 * @needle: substring to search
 * Return: pointer to the beginning of the located substring,
 * otherwise NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int count_haystack = 0;
	int count_needle;
	int count_match = 0;

	if (needle[0] == '\0' || haystack[0] == '\0')
		return (NULL);
	while (haystack[count_haystack])
	{
		count_needle = 0;
		if (haystack[count_haystack] == needle[0])
		{
			count_match = count_haystack;
			while (needle[count_needle])
			{
				if (haystack[count_haystack] == needle[count_needle])
				{
					count_needle++;
					count_haystack++;
				}
				else 
					break;
				if (needle[count_needle] == '\0')
					return (haystack + count_match);
			}
			count_haystack = count_match;
		}
		count_haystack++;
	}
	return (NULL);
}
