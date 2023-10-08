#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: n bytes of s2 to be concatenated
 * Return: pointer to the newly allocated memory, otherwise NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int count, count1, len = 0;
	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		if (s1 == NULL)
			s1 = "";
		else
			s2 = "";
	}
	len += strlen(s1);
	if (n > strlen(s2))
	{
		n = strlen(s2);
	}
	str = malloc(sizeof(*str) + len + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (count = 0; count < strlen(s1); count++)
	{
		str[count] = s1[count];
	}
	for (count1 = 0; count1 < n; count1++)
	{
		str[count + count1] = s2[count1];
	}
	str[count + count1] = '\0';
	return (str);
}
