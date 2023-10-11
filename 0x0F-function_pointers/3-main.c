#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @ac: arguments count
 * @av: arguments vector
 * Return: always 0.
*/
int main(int ac, char **av)
{
	int num1, num2, result;
	int (*func)(int, int);

	if (ac != 4)
	{
		printf("Error");
		exit(98);
	}
	func = get_op_func(av[2]);
	if (func == NULL)
	{
		printf("Error of nULL");
		exit(99);
	}
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);
	if (num2 == 0 && (*av[2] == '/' || *av[2] == '%'))
	{
		printf("Error");
		exit(100);
	}
	result = func(num1, num2);
	printf("%d\n", result);

	return (0);
}
