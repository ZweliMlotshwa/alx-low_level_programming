#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Select the correct unction to perform
 * the operation asked by the user
 * @s: The operator passed as argument.
 *
 * Return: A pointer to the function corresponding to
 * the operator given as a pointer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t op[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};
	int i = 0;

	while (op[i].op != NULL && *(op[i].op) != *s)
	i++;

	return (op[i].f);
}
