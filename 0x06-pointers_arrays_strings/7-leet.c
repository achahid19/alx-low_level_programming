#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string
 * Return: string
*/

char *leet(char *str)
{
	int count, count1;
	char alphabet[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char digit[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	count = 0;
	while (str[count])
	{
		count1 = 0;
		while (alphabet[count1])
		{
			if (str[count] == alphabet[count1])
			{
				str[count] = digit[count1];
				break;
			}
			count1++;
		}
		count++;
	}
	return (str);
}
