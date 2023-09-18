#include "main.h"

/**
 * rev_string - reverses string
 * @s: string to reverse
 * Return: void
*/

void rev_string(char *s)
{
	int count = 0;
	int countup = 0;
	int len = 0;
	int temp;

	while (*(s + count))
		count++;
	len = count - 1;
	while (len >= count / 2)
	{
		temp = *(s + len);
		*(s + len) = *(s + countup);
		*(s + countup) = temp;
		countup++;
		len--;
	}
}
