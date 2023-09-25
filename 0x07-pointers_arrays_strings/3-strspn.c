#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: bytes to accept
 * Return:  number of bytes in s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count_str = 0;
	unsigned int count_sub_str;

	if (accept[0] == '\0')
		return (count_str);
	while (s[count_str])
	{
		count_sub_str = 0;
		while (accept[count_sub_str])
		{
			if (s[count_str] == accept[count_sub_str])
				break;
			count_sub_str++;
			if (accept[count_sub_str] == '\0')
				return (count_str);
		}
		count_str++;
	}
	return (count_str);
}
