#include "main.h"
#include <stdlib.h>

/**
 * ft_len - returns the length of str
 * @str: string
 * Return: str's lenght
*/
int ft_len(char *str)
{
	/* base case */
	if (*str == '\0')
		return (0);
	return (ft_len(str + 1) + 1);
}

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the concatenated memory
*/
char *str_concat(char *s1, char *s2)
{
	char *str;
	int len, count, count1;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	len = ft_len(s1) + ft_len(s2);
	str = malloc(sizeof(*str) * len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (count = 0; count <= len; count++)
	{
		if (s1[count] != '\0')
			str[count] = s1[count];
		else
		{
			for (count1 = 0; count <= len; count1++, count++)
			{
				str[count] = s2[count1];
			}
		}
	}
	return (str);
}
