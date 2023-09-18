#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string
 * Return: void
*/

void puts2(char *str)
{
	int count = 0;

	while (str[count])
	{
		if (count % 2 != 0)
			count++;
		_putchar(str[count++]);
	}
	_putchar('\n');
}
