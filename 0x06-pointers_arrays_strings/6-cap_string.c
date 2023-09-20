#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: string
*/

char *cap_string(char *str)
{
	int count = 0;
	char index = 1;
	char c = ' ';

	while (str[count])
	{
		c = str[count];
		if (index == 1 && c >= 97 && c <= 122)
		{
			c -= 32;
			index = 0;
		}
		else if (index == 0 && !(c >= 97 && c <= 122) && !(c >= 48 && c <= 57)
		&& !(c >= 65 && c <= 90))
		{
			index = 1;
		}
		else
			index = 0;
		count++;
	}
	return (str);
}
