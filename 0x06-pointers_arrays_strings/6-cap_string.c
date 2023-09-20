#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: string
*/

char *cap_string(char *str)
{
	int count = 0;

	if (str[count] >= 'a' && str[count] <= 'z')
		str[count] -= 32;
	while (str[count])
	{
	if (str[count] == ' ' || str[count] == '\t' || str[count] == '\n'
	|| str[count] == ',' || str[count] == ';' || str[count] == '.'
	|| str[count] == '!' || str[count] == '?' || str[count] == '\"'
	|| str[count] == '(' || str[count] == ')' || str[count] == '{'
	|| str[count] == '}')
	{
		if (str[count + 1] >= 'a' && str[count + 1] <= 'z')
			str[count + 1] -= 'a' - 'A';
	}
	count++;
	}
	return (str);
}
