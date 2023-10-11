#include "function_pointers.h"

/**
 * print_name - function that prints name by a callback to another function
 * @name: name to print
 * @f: pointer to function
 * Return: void.
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
