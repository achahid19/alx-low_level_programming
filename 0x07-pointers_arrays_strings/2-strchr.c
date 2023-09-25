#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: character
 * Return: pointer to the first occurence of the character c in s, otherwise NULL 
*/

char *_strchr(char *s, char c)
{
    int count = 0;

    while (s[count])
    {
        if (s[count] == c)
            return (s + count);
        else
        count++;
    }
    return (0);
}
