#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - this program generates random passwords
 * Return: Always 0
*/

int main(void)
{
	int mdp[100];
	int count, sum, n;

	sum = 0;
	srand(time(NULL));
	for (count = 0; count < 100; count++)
	{
		mdp[count] = rand() % 78;
		sum += mdp[count] + 48;
		putchar(mdp[count] + 48);
		if ((2772 - sum) - 48 < 78)
		{
			n = 2772 - sum - 48;
			sum += n;
			putchar(n + 48);
			break;
		}
	}
	return (0);
}