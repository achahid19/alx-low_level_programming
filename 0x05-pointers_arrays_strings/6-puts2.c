#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: void
*/

void puts2(char *str)
{
	int count = 0;

	while (str[count] != '\0')
	{
		if (count % 2 != 0)
		{
			count++;
			continue;
		}
		_putchar(str[count++]);
	}
	_putchar('\n');
}
