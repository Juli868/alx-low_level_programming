#include <stdio.h>
#include "main.h"
/**
 *main - marks the start of excution
 *@argc: argument number
 *@argv: argument array
 *Return: 0 as default
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
