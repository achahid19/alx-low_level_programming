#include "main.h"
#include <stdlib.h>

/**
 * ft_strslen - returns the length of all strings
 * @str: 2D array of strings
 * @ac: number of strings
 * Return: strings length
*/
int ft_strslen(char **str, int ac)
{
	int count, count1;
	int len = 0;

	for (count = 0; count < ac; count++)
	{
		for (count1 = 0; str[count][count1]; count1++)
		{
			len++;
		}
	}
	return (len);
}

/**
 * argstostr  - concatenates all the arguments of the program
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a string, otherwise NULL
*/
char *argstostr(int ac, char **av)
{
	char *str;
	int len, count, count1, str_count = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	len = ft_strslen(av, ac);
	str = malloc(sizeof(char) * len + 1 + ac);
	if (str == NULL)
		return (NULL);
	for (count = 0; count < ac; count++)
	{
		if (!(str_count == 0))
			str[str_count++] = '\n';
		for (count1 = 0; av[count][count1]; count1++, str_count++)
		{
			str[str_count] = av[count][count1];
		}
	}
	str[str_count] = '\n';
	str[str_count++] = '\0';
	return (str);
}
