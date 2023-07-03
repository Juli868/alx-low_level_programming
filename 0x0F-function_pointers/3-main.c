#include "3-calc.h"
#include <stdio.h>
/**
 * main - major part of the program
 * @argc:number of arguments passed 
 * @argv:the arguments
 * Return: found value
 */
int main(int argc, char **argv)
{
	if (argc == 4)
	{
		(get_op_func(*argv));
		return(1);
	}
	return(0);
}
