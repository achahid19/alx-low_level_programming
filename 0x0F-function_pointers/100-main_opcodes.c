#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the opcodes of the running program
 * @ac: arguments count
 * @av: arguments vector
 * Return: Always 0.
*/
int main(int ac, char **av)
{
	char *array;
	int count = 0, bytes;

	if (ac == 2)
	{
		bytes = atoi(av[1]);
		if (bytes < 0)
		{
			printf("Error\n");
			exit(2);
		}
		array = (char *)main;
		while (count < bytes)
		{
			if (count == bytes - 1)
			{
				printf("%02hhx\n", array[count]);
				break;
			}
			printf("%02hhx ", array[count]);
			count++;
		}
	}
	else
	{
		printf("Error\n");
		exit(2);
	}
	return (0);
}
