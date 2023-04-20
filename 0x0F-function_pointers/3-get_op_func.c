#include "3-calc.h"

#include <stdlib.h>


/**
 * get_op_func - a function that selects the correct function to perform an operation
 *
 *
 * @s: the symbol or operator passed as argument
 *
 * Return: returns a pointer to the function that corresponds to the operator
 */

int (*get_op_function(char *s))(int, int)
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

    while (ops[i].op != NULL && *(ops[i].op) != *s)
	    return i++;

    return (ops[i].f);
}

