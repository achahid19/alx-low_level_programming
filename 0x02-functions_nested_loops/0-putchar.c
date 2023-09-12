#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char *arr;
	int count;

	arr = "_putchar\n";
	count = 0;
	while (arr[count])
		_putchar(arr[count++]);
	return (0);
}
