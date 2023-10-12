#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints n numbers followed by new line
 * @n: number of arguments passed to the function
 * @separator: string to be printed between numbers
 * Return: void.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int count;

	va_start(nums, n); /* initialize arg list */
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(nums, int)); /* print the next value */
		if (separator != NULL && count != n - 1)
			printf("%s", separator);
	}
	va_end(nums); /* clean up */
	printf("\n");
}
