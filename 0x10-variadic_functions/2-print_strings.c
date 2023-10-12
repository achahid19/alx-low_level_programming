#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints n strings followed by new line
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 * Return: void.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	unsigned int count;
	char *str;

	va_start(strs, n); /* initialze args list */
	for (count = 0; count < n; count++)
	{
		str = va_arg(strs, char *);
		if (str == NULL)
		{
			printf("(nil)");
			continue;
		}
		printf("%s", str);
		if (count != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(strs);
	printf("\n");
}
