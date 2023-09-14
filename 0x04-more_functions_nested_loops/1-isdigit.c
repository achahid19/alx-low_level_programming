#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: character to check
 * Return: 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	switch (c >= '0' && c <= '9')
	{
	case 1:
		return (1);
	case 0:
		break;
	}
	return (0);
}
