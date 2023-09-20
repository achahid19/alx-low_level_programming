#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: integer less than 0 if s1 < s2
 * equal to 0 if s1 match s2
 * greater than 0 if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	int count = 0;

	while (s1[count] == s2[count] && s1[count])
		count++;
	return (s1[count] - s2[count]);
}
