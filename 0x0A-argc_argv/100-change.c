#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: atgument count
 * @argv: argument vector
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int count = 0;
	int change = 0;
	int cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	else if (argc >= 2)
	{
		while (*(coins + count) != 0)
		{
			change += (cents / coins[count]);
			cents %= coins[count];
			if (cents == 0)
			break;
			count++;
		}
		printf("%d\n", change);
	}

	return (0);
}
