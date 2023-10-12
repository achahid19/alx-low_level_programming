#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all arguments of a function [variadic function]
 * @format: a list of types of arguments passed to the function:
 * c: char
 * i: integer
 * f: float
 * s: char *
 * Return: void.
*/
void print_all(const char * const format, ...)
{
va_list args;
unsigned int count = 0;
char *sep = "", *str;

va_start(args, format);
if (format != NULL)
{
	while (format[count])
	{
		switch (format[count])
		{
			case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
			case 'i':
					printf("%s%d", sep, va_arg(args, int));
					break;
			case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
			case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
			default:
					count++;
					continue;
			}
		count++;
		sep = ", ";
	}
}
va_end(args);
printf("\n");
}
