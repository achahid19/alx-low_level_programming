#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	write(1, "0, 1, 2, 3, 4, 5,", 22);
	write(1, " 6, 7, 8, 9\n", 14);
	return (0);
}
