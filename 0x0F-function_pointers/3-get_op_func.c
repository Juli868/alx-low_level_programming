#include "3-calc.h"
/**
 * get_op_fiunc - will determine the operator to use
 * @s: string to consider
 * Return: pointer to the chosen function
 */
int (*get_op_func(char *s))(int, int)
{
	int counter;
	int (*save_func) (int, int);

	counter = 0;
	if (s[counter] == '+')
		save_func = &op_add;
	else if (s[2] == '-')
		save_func = &op_sub;
	else if (s[2] == '*')
		save_func = &op_mul;
	else if (s[2] == '/')
		save_func = &op_div;
	else if(s[2] == '%')
		save_func = &op_div;
	return (save_func);
	if (save_func == NULL)
		return (NULL);
}
