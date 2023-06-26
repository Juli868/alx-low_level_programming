#include "calc.h"
/**
 * get_op_func - will determine the operator to use
 * @s: string to consider
 * Return: pointer to the chosen function
 */
int (*get_op_func(char *s))(int, int)
{
	int counter;

	if (s[counter] == "+")
		get_op_func = &op_add;
	else if (s[2] == "-")
		get_op_func = &op-sub;
	else if (s[2] == "*")
		get_op_func = &op_mul;
	else if (s[2] == "/")
		get_op_func = &op_div;
	else if(s[2] == "%")
		get_op_func = &op_div;
	return (0);
	if (get_op_func == NULL)
		return (-1);
}
