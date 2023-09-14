#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: character to check
 * Return: 1 if c is uppercase, otherwise 0
 */

int _isupper(int c)
{
	switch (c >= 'A' && c <= 'Z')
	{
	case 1:
		return (1);
	case 0:
		return (0);
	}
}
