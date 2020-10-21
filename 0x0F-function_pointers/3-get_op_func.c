#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - description
 * Return: always 0
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
		printf("bug%d\n", i);
		if (*(ops + i)->op == *s)
			return (*(ops + i)->f);
		i++;
	}
	return (NULL);
}
