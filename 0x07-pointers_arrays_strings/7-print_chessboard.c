#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: 2D array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int count1 = 0;
	int count2;

	while (count1 < 8)
	{
		count2 = 0;
		while (count2 < 8)
		{
			_putchar(a[count1][count2]);
			if (count2 == 7)
				_putchar('\n');
			count2++;
		}
		count1++;
	}
}
