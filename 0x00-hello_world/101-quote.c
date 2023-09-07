#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: return value is 1.
 */
int main(void)
{
	char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(1, msg, sizeof(msg) - 1);
	write(1, "\n", 1);
	return (1);
}
