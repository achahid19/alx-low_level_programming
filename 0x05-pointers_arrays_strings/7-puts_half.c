#include "main.h"

/**
 * puts_half - prints half of a string followed by new line
 * @str: string
 * Return: void
*/

void puts_half(char *str)
{
	int start, str_len = 0;

	while (str[str_len])
		str_len++;
	start = (str_len - 1) / 2;
	if (start % 2 == 0)
		start++;
	while (str[start])
		_putchar(str[start++]);
	_putchar('\n');
}

int main(void)
{
	char *str;

	str = "123456789";
	puts_half(str);
	return (0);
}