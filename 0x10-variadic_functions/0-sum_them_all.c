#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameters to sum them
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int count;
	int sum = 0;

	va_start(arg, n); /* initialize the arguments list */
	count = 0;
	while (count < n)
	{
		sum += va_arg(arg, int); /* get the next arg value */
		count++;
	}
	va_end(arg); /* clean up the args list */
	return (sum);
}
