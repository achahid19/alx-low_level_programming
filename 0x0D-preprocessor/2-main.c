#include "main.h"

/**
 * main - Entry point
 * Return: Always 0.
*/
int main(void)
{
	char *str;
	int count = 0;

	str = __FILE__;
	while (str[count])
	{
		_putchar(str[count++]);
	}
	_putchar('\n');
	return (0);
}
