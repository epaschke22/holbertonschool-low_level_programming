#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - returns pointer to needed function
 * @s: string to check opperator
 * Return: pointer to opperator function from struct, or nil
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

	i = 0;
	while (*(ops + i)->op)
	{
		if (*(ops + i)->op == *s)
			return (*(ops + i)->f);
		i++;
	}
	return (NULL);
}
