#include "3-calc.h"
/**
 * main - major part of the program
 * @argc:number of arguments passed 
 * @argv:the arguments
 * Return: found value
 */
int main(int argc, char *argv)
{
	if (argc == 4)
		return (get_op_func(argv));
	else
		return(0);
}
