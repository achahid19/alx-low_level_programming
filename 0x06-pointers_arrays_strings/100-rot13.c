#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 * Return: encoded string
*/

char *rot13(char *str)
{
	int count, count1;
	char c = ' ';
	char low_upper_alpha[53] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
								'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
								'u', 'v', 'w', 'x', 'y', 'z', 'A', 'B', 'C', 'D',
								'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N',
								'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
								'Y', 'Z'};
	char rot13_alpha[53] = {'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w',
							'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g',
							'h', 'i', 'j', 'k', 'l', 'm', 'N', 'O', 'P', 'Q',
							'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A',
							'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
							'L', 'M'};
	count = 0;
	while (str[count])
	{
	c = str[count];
		count1 = 0;
		while (low_upper_alpha[count1])
		{
			if (c == low_upper_alpha[count1])
			{
				str[count] = rot13_alpha[count1];
				break;
			}
			count1++;
		}
		count++;
	}
	return (str);
}
