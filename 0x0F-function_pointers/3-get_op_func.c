#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - fucntion that selects the correct function to perform
 * the operation asked
 * @s: operator passed as an argument to the program
 * Return: pointer to a function that corresponds the op given
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	for (i = 0; i < 5; i++)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
	}
	return (NULL);
}
