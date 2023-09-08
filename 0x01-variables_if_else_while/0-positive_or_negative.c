#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/**
 * ft_length - Returns the length of the string
 * @str: The input string
 * Return: The length of the string
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
 * ft_putnbr - Displays a long integer on stdout
 * @num: The number to be displayed
 * Return: None
 */
void ft_putnbr(long int num)
{
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num >= 0)
	{
		if (num >= 10)
		{
			ft_putnbr(num / 10);
			ft_putnbr(num % 10);
		}
		if (num < 10)
		{
			num += 48;
			write(1, &num, 1);
		}
	}
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;
	char arr1[] = " is positive\n";
	char arr2[] = " is negative\n";
	char arr3[] = " is zero\n";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	switch (n > 0)
	{
	case 1:
		ft_putnbr(n);
		write(1, &arr1, ft_length(arr1));
		break;
	case 0:
		switch (n < 0)
		{
		case 1:
			ft_putnbr(n);
			write(1, &arr2, ft_length(arr2));
			break;
		case 0:
			ft_putnbr(n);
			write(1, "&arr3", ft_length(arr3));
			break;
		}
	}
	return (0);
}
