#include <unistd.h>

/**
 * ft_length - Returns the length of the string
 * @str: String
 * Return: String's length
 */
int ft_length(char *str)
{
	int count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}
/**
 * main - Entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	write(1, "0, 1, 2, 3, 4, 5,", ft_length("0, 1, 2, 3, 4, 5,"));
	write(1, " 6, 7, 8, 9\n", ft_length(" 6, 7, 8, 9\n"));
	return (0);
}
