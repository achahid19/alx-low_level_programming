#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	write(1, "0, 1, 2, 3, 4, 5, 6, 7, 8, 9\n", 29);
	return (0);
}
