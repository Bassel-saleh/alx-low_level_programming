#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - gets the operator for the calculation process
 * @s: the given operation
 * Return: ops
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
	int i = 0;

	while (ops[i].op != 0)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (0);
}
