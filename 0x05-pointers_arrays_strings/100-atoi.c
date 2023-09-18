#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 * Return: integer
*/

int _atoi(char *s)
{
	int count = 0;
	unsigned int num = 0;
	int sign = 1;

	while (s[count] < '0' || s[count] > '9')
	{
		if (s[count] == '-')
			sign = -sign;
		count++;
	}
	while (s[count] >= '0' && s[count] <= '9')
	{
		num = (num * 10) + (s[count] - 48);
		count++;
	}
	return (num * sign);
}
