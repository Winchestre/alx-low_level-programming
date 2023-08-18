#include "3-calc.h"

/**
 * get_op_func - evaluates math operation based on
 * user defined selection.
 * @s: char operator argument
 * Return: pointer to function corresonding to
 * operation
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
	while (ops[i].op)
	{
		if (s[0] == ops->op[i])
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
