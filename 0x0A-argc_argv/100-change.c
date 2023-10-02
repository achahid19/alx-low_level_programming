#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * @ac: arguments count
 * @av: arguments vector
 * Return: Always 0.
*/
int main(int ac, char **av)
{
	char *change[] = {"25", "10", "5", "2", "1"};
	int cents, count, index = 0;

	count = 0;
	if (ac == 2)
	{
		if (atoi(av[1]) < 0)
			write(1, "0\n", 2);
		else
		{
			cents = atoi(av[1]);
			while (count < 5)
			{
				if (cents >= atoi(change[count]))
				{
					cents -= atoi(change[count]);
					index++;
				}
				else
					count++;
			}
		}
	}
	else
	{
		write(1, "Error\n", 6);
		return (1);
	}
	printf("%d", index);
	return (EXIT_SUCCESS);
}
